
#import "MyHTTPResponse.h"
#import "HTTPServer.h"
#import "StockTrader.h"

@implementation MyHTTPResponse

//
+ (void)load
{
	[HTTPResponseHandler registerHandler:self];
}

//
+ (BOOL)canHandleRequest:(CFHTTPMessageRef)aRequest
				  method:(NSString *)requestMethod
					 url:(NSURL *)requestURL
			headerFields:(NSDictionary *)requestHeaderFields
{
	return YES;
}

//
- (void)startResponse
{
	NSString *path = [url.path substringFromIndex:1];
	NSString *action = path.stringByDeletingPathExtension;
	BOOL showProgress = [path.pathExtension boolValue];
	NSMutableDictionary *dict = (id)NSUrlQueryToDict(url.query);
	
	NSData *data = (!action.length || !dict.count)
	? [[NSString stringWithFormat:@"USAGE: http://%@/110?Direction=<B|S>&StockCode=<xxxxxx>&Price=<xx.xx>&PriceType=0&Volume=<xxx>&WTAccount=<AXXXXXXXXX>&WTAccountType=SHACCOUNT&CommBatchEntrustInfo=1", url.host] dataUsingEncoding:NSUTF8StringEncoding]
	: StockTrade(action, dict, showProgress);

	CFHTTPMessageRef response = CFHTTPMessageCreateResponse(kCFAllocatorDefault, 200, NULL, kCFHTTPVersion1_1);
	CFHTTPMessageSetHeaderFieldValue(response, (CFStringRef)@"Content-Type", (CFStringRef)@"application/text");
	CFHTTPMessageSetHeaderFieldValue(response, (CFStringRef)@"Connection", (CFStringRef)@"close");
	CFHTTPMessageSetHeaderFieldValue(response, (CFStringRef)@"Content-Length", (__bridge CFStringRef)[NSString stringWithFormat:@"%d", (int)[data length]]);
	CFDataRef headerData = CFHTTPMessageCopySerializedMessage(response);
	
	@try
	{
		[fileHandle writeData:(__bridge NSData *)headerData];
		[fileHandle writeData:data];
	}
	@catch (NSException *exception)
	{
		// Ignore the exception, it normally just means the client
		// closed the connection from the other end.
	}
	@finally
	{
		CFRelease(headerData);
		[server closeHandler:self];
	}
}

@end


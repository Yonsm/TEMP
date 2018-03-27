
//
#import "StockTrader.h"
#import "HTTPServer.h"

//
tztStockBuySellViewNew *_view = nil;
HOOK_MESSAGE(void, tztStockTradeViewController, viewDidAppear_, BOOL animated)
{
	_tztStockTradeViewController_viewDidAppear_(self, sel, animated);

	//
	UIView *contentView = [[self view] subviews][0];
	for (UIView *view in contentView.subviews)
	{
		if ([NSStringFromClass(view.class) isEqualToString:@"tztStockBuySellViewNew"])
		{
			_view = (id)view;
			break;
		}
	}
}

//
NSData *StockTrade(NSString *action, NSMutableDictionary *dict, BOOL showProgress)
{
	if (!dict[@"Reqno"])
	{
		Class tztNewReqno = NSClassFromString(@"tztNewReqno");
		NSString *string = [tztNewReqno key:(long long)_view reqno:[_view ntztReqNo]];
		id reqno = [tztNewReqno reqnoWithString:string];
		NSString *data = [NSString stringWithFormat:@"%lld+%@", [_view nMsgType], dict[@"StockCode"]];
		[reqno setPageData:data];
		NSString *rn = [reqno getReqnoValue];
		dict[@"Reqno"] = rn;
	}

	Class tztMoblieStockComm = NSClassFromString(@"tztMoblieStockComm");
	unsigned long long ret = [[tztMoblieStockComm getShareInstance] onSendDataAction:action withDictValue:dict];
	dict[@"RETURN"] = @(ret);
	return [NSJSONSerialization dataWithJSONObject:dict options:NSJSONWritingPrettyPrinted error:nil];
}

//
NSMutableString *_actionLogs = nil;
_HOOK_MESSAGE(unsigned long long, tztMoblieStockComm, onSendDataAction_withDictValue_bShowProcess_, NSString *action, NSMutableDictionary *dict, BOOL bShowProcess)
{
	if (_actionLogs)
	{
		@synchronized (_actionLogs)
		{
			NSString *stamp = NSFormatDateWithStyle(NSDate.date, NSDateFormatterNoStyle, NSDateFormatterMediumStyle);
			[_actionLogs appendFormat:@"%@ %@-%d=>%@\n", stamp, action, bShowProcess, dict];
		}
	}
	return _tztMoblieStockComm_onSendDataAction_withDictValue_bShowProcess_(self, sel, action, dict, bShowProcess);
}

//
NSString * readActionLog(void)
{
	if (_actionLogs == nil)
	{
		_actionLogs = [NSMutableString string];	// 这里赋值理论上有同步问题，但机率是几乎不会触发，故忽略
		_Init_tztMoblieStockComm_onSendDataAction_withDictValue_bShowProcess_();
		return @"Action logging ENABLED...";
	}
	
	@synchronized (_actionLogs)
	{
		return _actionLogs;
	}
}

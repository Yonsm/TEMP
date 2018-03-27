
//
#import "StockTrader.h"
#import "HTTPServer.h"

//
tztStockBuySellViewNew *_buyView = nil;
tztStockBuySellViewNew *_sellView = nil;
HOOK_MESSAGE(void, tztStockTradeViewController, viewDidAppear_, BOOL animated)
{
	_tztStockTradeViewController_viewDidAppear_(self, sel, animated);

	//
	UIView *contentView = [[self view] subviews][0];
	for (UIView *view in contentView.subviews)
	{
		if ([NSStringFromClass(view.class) isEqualToString:@"tztStockBuySellViewNew"])
		{
			long long nMsgType = ((tztStockBuySellViewNew *)view).nMsgType;
			if (nMsgType == 12310)
			{
				_buyView = (tztStockBuySellViewNew *)view;
			}
			else if (nMsgType == 12311)
			{
				_sellView = (tztStockBuySellViewNew *)view;
			}
		}
	}
}

//
NSData *StockTrade(NSString *action, NSMutableDictionary *dict, BOOL showProgress)
{
	if (!dict[@"Reqno"])
	{
		tztStockBuySellViewNew *view = nil;
		if ([action isEqualToString:@"110"])
		{
			view = [dict[@"Direction"] isEqualToString:@"S"] ? _sellView : _buyView;
		}
		id key;
		int ntztReqNo;
		long long nMsgType;
		if (view)
		{
			key = view;
			ntztReqNo = [view ntztReqNo];
			nMsgType = [view nMsgType];
		}
		else
		{
			key = dict;	// FAKE!
			ntztReqNo = 1;
			nMsgType = 0;
		}

		Class tztNewReqno = NSClassFromString(@"tztNewReqno");
		NSString *string = [tztNewReqno key:(long long)key reqno:ntztReqNo];
		id reqno = [tztNewReqno reqnoWithString:string];
		if (nMsgType && dict[@"StockCode"])
		{
			NSString *data = [NSString stringWithFormat:@"%lld+%@", nMsgType, dict[@"StockCode"]];
			[reqno setPageData:data];
		}
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
			[_actionLogs appendFormat:@"%@ /%@%@?%@\n", stamp, action, (bShowProcess ? @".1" : @""), NSUrlQueryFromDict(dict)];
		}
	}
	return _tztMoblieStockComm_onSendDataAction_withDictValue_bShowProcess_(self, sel, action, dict, bShowProcess);
}

//
NSString *ActionLogs(void)
{
	if (_actionLogs == nil)
	{
		_Init_tztMoblieStockComm_onSendDataAction_withDictValue_bShowProcess_();
		_actionLogs = [NSMutableString string];
		return @"Action Logging ENABLED now...";
	}

	@synchronized (_actionLogs)
	{
		NSString *logs = _actionLogs;
		_actionLogs = [NSMutableString string];
		return logs;
	}
}

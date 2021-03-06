
// Export
NSData *StockTrade(NSString *action, NSMutableDictionary *dict, BOOL showProgress);
NSString *ActionLogs(void);

// From class-dump
@interface tztMoblieStockComm
+ (void)getAllInstance;
+ (void)freeAllInstanceSocket;
+ (void)freeAllCommInstance;
+ (void)freeShareInstance;
+ (id)getInstance;
+ (id)getShareInstance;
+ (void)freeSharejhInstance;
+ (id)getjhInstance;
+ (id)getSharejhInstance;
+ (void)freeSharekhInstance;
+ (id)getkhInstance;
+ (id)getSharekhInstance;
+ (void)freeSharezxInstance;
+ (id)getzxInstance;
+ (id)getSharezxInstance;
+ (void)freeSharehqInstance;
+ (id)gethqInstance;
+ (id)getSharehqInstance;
+ (void)freeShareInstance:(int)arg1;
+ (id)getInstance:(int)arg1;
+ (id)getShareInstance:(int)arg1;
+ (void)AddClientInfo:(id)arg1;
+ (void)AddCommJYHead:(id)arg1 withTokenType:(int)arg2;
+ (id)deviceString;
+ (void)AddCommJYHead:(id)arg1;
+ (void)AddCommHead:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *anyReqestDict; // @synthesize anyReqestDict=_anyReqestDict;
@property(retain, nonatomic) NSMutableDictionary *dictSendObjects; // @synthesize dictSendObjects=_dictSendObjects;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) unsigned long long tztEncodeType; // @synthesize tztEncodeType=_tztEncodeType;
@property(retain, nonatomic) NSMutableDictionary *dictSockets; // @synthesize dictSockets=_dictSockets;
@property(retain, nonatomic) NSMutableDictionary *dictObjs; // @synthesize dictObjs=_dictObjs;
@property(nonatomic) unsigned long long nObjectIndex; // @synthesize nObjectIndex=_nObjectIndex;
@property(nonatomic) double fConnectTimeOut; // @synthesize fConnectTimeOut=_fConnectTimeOut;
- (void)test1setHost:(id)arg1 withPort:(int)arg2;
- (void)testTimer;
- (long long)getSocketFlag;
- (void)DealSendDataError:(id)arg1 nType:(long long)arg2 andReqnoKey:(id)arg3;
- (_Bool)isExist:(id)arg1;
- (void)removeSendObject:(id)arg1;
- (void)removeSendObjectByIphoneKey:(id)arg1;
- (void)addSendObject:(id)arg1;
- (void)OnSendTimer:(long long)arg1;
- (void)setupsendTimerOutWithTime;
- (void)endSendTimeoutTimer;
- (_Bool)getSzyRestState:(id)arg1;
- (long long)onSendDataFromSzyFrome:(id)arg1;
- (unsigned long long)onSendDataAction:(id)arg1 withDictValue:(id)arg2 bShowProcess:(_Bool)arg3;
- (void)onSenddataError:(id)arg1 type:(int)arg2;
- (unsigned long long)onSendDataAction:(id)arg1 withDictValue:(id)arg2;
- (unsigned long long)OnRequestJH;
- (unsigned long long)OnRequestOnline;
- (void)setupsendTimerWithTime:(double)arg1;
- (void)endsendTimer;
- (unsigned long long)OnCommNotify:(unsigned long long)arg1 lParam_:(unsigned long long)arg2;
- (unsigned long long)OnRecvMessage:(long long)arg1 withData:(id)arg2;
- (unsigned long long)OnRequestData:(unsigned long long)arg1 lParam_:(unsigned long long)arg2;
- (void)removeSocketObj:(id)arg1;
- (void)addSocketObj:(id)arg1;
- (void)removeObj:(id)arg1;
- (void)addObj:(id)arg1;
- (void)onInitGCDDataSocket;
- (double)getConnectTimeOut;
- (void)setConnectTimeOut:(double)arg1;
- (void)setEncodeType:(unsigned long long)arg1;
- (_Bool)getOpenSSL;
- (void)setOpenSSL:(_Bool)arg1;
- (int)getTransTypePort;
- (id)getTransTypeHost;
- (void)setStockHostPort:(id)arg1 nPort_:(unsigned int)arg2;
- (_Bool)setStockHostPort;
- (void)onChangeTestHostPort:(id)arg1;
- (void)onChangeHostPort:(id)arg1;
- (void)OnTimer;
- (void)dealloc;
- (void)freeSocketComm;
- (void)setSession:(int)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (void)addTztCommJYHead:(id)arg1;
- (_Bool)willSendDataWithDictValue:(id)arg1;
- (void)addTztCommHead:(id)arg1;
- (id)mallocSizeGetIntTypeData:(long long)arg1 withStr:(id)arg2 andUnit:(long long)arg3;
- (void)replaceTechData:(id)arg1 andItem:(id)arg2 andOrignlParas:(id)arg3 andpriceUnit:(long long)arg4 andVoloUnit:(long long)arg5;
- (void)replaceTrendLastPrice:(id)arg1 andItem:(id)arg2 andOrignlParas:(id)arg3 andpriceUnit:(long long)arg4 andVoloUnit:(long long)arg5;
- (void)replace6to10RangeData:(id)arg1 andOrignlStr:(id)arg2 andOrignlParas:(id)arg3 andpriceUnit:(long long)arg4 andVoloUnit:(long long)arg5;
- (void)replace1to5RangeData:(id)arg1 andItem:(id)arg2 andpriceUnit:(long long)arg3 andVoloUnit:(long long)arg4;
- (void)replaceLastPrice:(id)arg1 andItem:(id)arg2 andOrignlParas:(id)arg3 andpriceUnit:(long long)arg4 andVoloUnit:(long long)arg5;
- (unsigned long long)dealOrighTrendHeaderDataGetConsultPrice:(id)arg1;
- (id)dealOrighQuoteDataGetStockCode:(id)arg1;
- (_Bool)compareTimerMonthDataRangeEvalue:(id)arg1 andCompareTimer:(id)arg2;
- (long long)getAddTrendData:(id)arg1 andCompareTimer:(id)arg2;
- (id)mallocSizeGetStr:(long long)arg1 withStr:(id)arg2 andUnit:(long long)arg3;
- (id)mallocSizeGetFloatTypeData:(long long)arg1 withStr:(id)arg2 andUnit:(long long)arg3;
- (void)stringAddSpaceLineStr:(id)arg1 andPinjieOrighnStr:(id)arg2;
- (void)stringAddSpaceLine:(id)arg1 andPinjieOrighnStr:(id)arg2;
- (id)getDecimalStr:(id)arg1;
- (id)getStockName:(id)arg1;
- (void)dealTrendNeedAddData:(id)arg1 withSnapQuote:(id)arg2 paramsObj:(id)arg3 andGridData:(id)arg4 andtrendAllData:(id)arg5;
- (void)dealFiveDataNeedAddData:(id)arg1 withSnapQuote:(id)arg2 paramsObj:(id)arg3 andGridData:(id)arg4 andtrendAllData:(id)arg5 andMaxValue:(double)arg6 andMinValue:(double)arg7 andValideTradeDays:(id)arg8;
- (void)dealFenjiaData:(id)arg1 andParms:(id)arg2 andMarketNo:(_Bool)arg3;
- (void)dealDealData:(id)arg1 andParms:(id)arg2;
- (void)dealTechData:(id)arg1 andParms:(id)arg2 requestData:(id)arg3;
- (void)dealTrendData:(id)arg1 andParms:(id)arg2 requestData:(id)arg3 withSnapQuote:(id)arg4;
- (void)dealQuoteItemData:(id)arg1 andParms:(id)arg2 andRqeustData:(id)arg3;
- (void)dealBuySellQueueData:(id)arg1 andParms:(id)arg2 andRqeustData:(id)arg3 andResp:(id)arg4 andSnapQuote:(id)arg5;
- (void)dealKlineHeaderData:(id)arg1 andParms:(id)arg2;
- (void)dealTrendHeaderData:(id)arg1 andParms:(id)arg2;
- (id)getNowVol:(id)arg1;
- (void)oncommDataForSzy:(id)arg1 withSnapQuote:(id)arg2 requestData:(id)arg3 paramsObj:(id)arg4 immediatelySendData:(_Bool)arg5;
- (int)sendActionFromSZY_Level2:(id)arg1;
@end

@protocol tztNewReqno
+ (id)key:(long long)arg1 reqno:(int)arg2 tokenkind:(int)arg3 tokenindex:(int)arg4 reqdefone:(long long)arg5 pagedata:(id)arg6 urlpath:(id)arg7 httpstring:(int)arg8 session:(int)arg9;
+ (id)key:(long long)arg1 reqno:(int)arg2 tokenkind:(int)arg3 tokenindex:(int)arg4 reqdefone:(long long)arg5 pagedata:(id)arg6;
+ (id)key:(long long)arg1 reqno:(int)arg2 tokenkind:(int)arg3 tokenindex:(int)arg4 reqdefone:(int)arg5;
+ (id)key:(long long)arg1 reqno:(int)arg2 tokenkind:(int)arg3 tokenindex:(int)arg4;
+ (id)key:(long long)arg1 reqno:(int)arg2;
+ (id)reqnoWithString:(id)arg1;
@property(nonatomic) int nSessionType; // @synthesize nSessionType=_nSessionType;
@property(nonatomic) int nHTTPString; // @synthesize nHTTPString=_nHTTPString;
@property(retain, nonatomic) NSString *nsURLPath; // @synthesize nsURLPath=_nsURLPath;
@property(retain, nonatomic) NSString *nsPageData; // @synthesize nsPageData=_nsPageData;
- (id)getReqnoValue;
- (int)getSessionType;
- (void)setSessionType:(int)arg1;
- (int)getHTTPString;
- (void)setHTTPString:(int)arg1;
- (id)getURLPath;
- (void)setURLPath:(id)arg1;
- (id)getPageData;
- (void)setPageData:(id)arg1;
- (long long)getReqdefOne;
- (void)setReqdefOne:(long long)arg1;
- (int)getTokenIndex;
- (void)setTokenIndex:(int)arg1;
- (int)getTokenKind;
- (void)setTokenKind:(int)arg1;
- (int)getReqno;
- (void)setReqno:(int)arg1;
- (long long)getIphoneKey;
- (void)setIphoneKey:(long long)arg1;
- (id)initwithString:(id)arg1;
@end

@protocol tztStockTradeViewController
- (void)traderButtonClicked:(UIBarButtonItem *)sender;
@end

@interface tztBaseTradeView : UIView
+ (_Bool)IsExitError:(int)arg1;
//@property(retain, nonatomic) tztHTTPSendData *httpSend; // @synthesize httpSend=_httpSend;
@property _Bool bDetailNew; // @synthesize bDetailNew=_bDetailNew;
@property(retain, nonatomic) NSMutableDictionary *dictOption; // @synthesize dictOption=_dictOption;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeRight; // @synthesize swipeRight=_swipeRight;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeLeft; // @synthesize swipeLeft=_swipeLeft;
@property _Bool bRequest; // @synthesize bRequest=_bRequest;
@property int nRZRQHZStock; // @synthesize nRZRQHZStock=_nRZRQHZStock;
@property(retain, nonatomic) NSMutableArray *ayToolBtn; // @synthesize ayToolBtn=_ayToolBtn;
//@property(retain, nonatomic) tztUITradeToolBarView *pTradeToolBar; // @synthesize pTradeToolBar=_pTradeToolBar;
@property int ntztReqNo; // @synthesize ntztReqNo=_ntztReqNo;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property long long nMsgType; // @synthesize nMsgType=_nMsgType;
- (_Bool)isEqualMsgType:(long long)arg1;
- (void)setToolBarBtn;
- (id)GetContent:(id)arg1 nIndex_:(long long)arg2;
- (void)OnGridPreStock:(id)arg1 ayTitle_:(id)arg2;
- (void)OnGridNextStock:(id)arg1 ayTitle_:(id)arg2;
- (_Bool)OnDetail:(id)arg1 ayTitle_:(id)arg2 dictIndex_:(id)arg3;
- (_Bool)OnDetail:(id)arg1 ayTitle_:(id)arg2;
- (_Bool)OnToolbarMenuClick:(id)arg1;
- (void)OnNeedLoginOut;
- (void)onReturn;
- (void)removeFromSuperview;
- (void)setStockCode:(id)arg1;
- (void)ClearDataWithOutCode;
- (void)ClearData;
- (void)OnRefresh;
- (void)SetDefaultData;
- (void)OnRequestData;
- (void)ShowTool:(_Bool)arg1;
- (void)reloadTheme;
- (void)SwipeLeftOrRight:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)freeData;
- (void)dealloc;
- (id)init;

@end

@interface tztStockBuySellViewNew : tztBaseTradeView

@property(retain, nonatomic) UILabel *lbHoldDays; // @synthesize lbHoldDays=_lbHoldDays;
@property(nonatomic) long long nStockType; // @synthesize nStockType=_nStockType;
@property(retain, nonatomic) NSString *nsStockKind; // @synthesize nsStockKind=_nsStockKind;
@property(retain, nonatomic) UILabel *lbCanUseMoney; // @synthesize lbCanUseMoney=_lbCanUseMoney;
@property(nonatomic) int nPreSelPrice; // @synthesize nPreSelPrice=_nPreSelPrice;
@property(nonatomic) int nCurSelPrice; // @synthesize nCurSelPrice=_nCurSelPrice;
@property(retain, nonatomic) UILongPressGestureRecognizer *pLongPress; // @synthesize pLongPress=_pLongPress;
@property(retain, nonatomic) NSString *ns6Text; // @synthesize ns6Text=_ns6Text;
@property(retain, nonatomic) NSString *nsWTAccount; // @synthesize nsWTAccount=_nsWTAccount;
@property(retain, nonatomic) NSString *nsWTAccountType; // @synthesize nsWTAccountType=_nsWTAccountType;
@property(retain, nonatomic) NSString *nsMarketNo; // @synthesize nsMarketNo=_nsMarketNo;
//@property(retain, nonatomic) tztTradeHQObject *hqObject; // @synthesize hqObject=_hqObject;
@property(retain, nonatomic) NSString *nsNewPrice; // @synthesize nsNewPrice=_nsNewPrice;
@property(retain, nonatomic) NSMutableArray *ayTransType; // @synthesize ayTransType=_ayTransType;
@property(retain, nonatomic) NSMutableArray *ayStockNum; // @synthesize ayStockNum=_ayStockNum;
@property(retain, nonatomic) NSMutableArray *ayTypeContent; // @synthesize ayTypeContent=_ayTypeContent;
@property(retain, nonatomic) NSMutableArray *ayType; // @synthesize ayType=_ayType;
@property(retain, nonatomic) NSMutableArray *ayAccountName; // @synthesize ayAccountName=_ayAccountName;
@property(retain, nonatomic) NSMutableArray *ayAccount; // @synthesize ayAccount=_ayAccount;
@property(retain, nonatomic) UIView *pViewSellTotal; // @synthesize pViewSellTotal=_pViewSellTotal;
@property(retain, nonatomic) UIView *pViewBuyTotal; // @synthesize pViewBuyTotal=_pViewBuyTotal;
//@property(retain, nonatomic) tztGroupRadioView *pRadioView; // @synthesize pRadioView=_pRadioView;
//@property(retain, nonatomic) tztUIDroplistView *pWTTypeList; // @synthesize pWTTypeList=_pWTTypeList;
//@property(retain, nonatomic) tztLevel2BuysellTenPriceView *tenPrice; // @synthesize tenPrice=_tenPrice;
//@property(retain, nonatomic) tztUIVCBaseView *wudang; // @synthesize wudang=_wudang;
@property(retain, nonatomic) NSString *strPriceType; // @synthesize strPriceType=_strPriceType;
@property(retain, nonatomic) UILabel *labelMoneyTips; // @synthesize labelMoneyTips=_labelMoneyTips;
//@property(retain, nonatomic) tztUILabel *pLabelAmountDel; // @synthesize pLabelAmountDel=_pLabelAmountDel;
//@property(retain, nonatomic) tztUILabel *pLabelAmountAdd; // @synthesize pLabelAmountAdd=_pLabelAmountAdd;
//@property(retain, nonatomic) tztUILabel *pLabelPriceDel; // @synthesize pLabelPriceDel=_pLabelPriceDel;
//@property(retain, nonatomic) tztUILabel *pLabelPriceAdd; // @synthesize pLabelPriceAdd=_pLabelPriceAdd;
//@property(retain, nonatomic) tztUILabel *pLabelZT; // @synthesize pLabelZT=_pLabelZT;
//@property(retain, nonatomic) tztUILabel *pLabelDT; // @synthesize pLabelDT=_pLabelDT;
//@property(retain, nonatomic) tztUIButton *pButtonOK; // @synthesize pButtonOK=_pButtonOK;
//@property(retain, nonatomic) tztUIButton *pMinPrice; // @synthesize pMinPrice=_pMinPrice;
//@property(retain, nonatomic) tztUIButton *pMaxPrice; // @synthesize pMaxPrice=_pMaxPrice;
//@property(retain, nonatomic) tztUIButton *pAmountDel; // @synthesize pAmountDel=_pAmountDel;
//@property(retain, nonatomic) tztUIButton *pAmountAdd; // @synthesize pAmountAdd=_pAmountAdd;
//@property(retain, nonatomic) tztUIButton *pPriceDel; // @synthesize pPriceDel=_pPriceDel;
//@property(retain, nonatomic) tztUIButton *pPriceAdd; // @synthesize pPriceAdd=_pPriceAdd;
//@property(retain, nonatomic) tztUITextField *pStockAmount; // @synthesize pStockAmount=_pStockAmount;
//@property(retain, nonatomic) tztUITextField *pStockPrice; // @synthesize pStockPrice=_pStockPrice;
//@property(retain, nonatomic) tztUITextField *pStockCode; // @synthesize pStockCode=_pStockCode;
//@property(retain, nonatomic) tztUIDroplistView *pAccountList; // @synthesize pAccountList=_pAccountList;
//@property(retain, nonatomic) tztBuyTrendView *pBuyTrendView; // @synthesize pBuyTrendView=_pBuyTrendView;
//@property(retain, nonatomic) UIView *pLineView; // @synthesize pLineView=_pLineView;
//@property(retain, nonatomic) tztWebView *pTradeWithDraw; // @synthesize pTradeWithDraw=_pTradeWithDraw;
//@property(retain, nonatomic) tztWebView *pTradeStock; // @synthesize pTradeStock=_pTradeStock;
//@property(retain, nonatomic) tztMutilScrollView *pMutilViews; // @synthesize pMutilViews=_pMutilViews;
//@property(nonatomic) id <tztStockBuySellViewNewDelegate> tztStockDelegate; // @synthesize tztStockDelegate=_tztStockDelegate;
@property(retain, nonatomic) NSString *nsTSInfo; // @synthesize nsTSInfo=_nsTSInfo;
@property _Bool bBuyFlag; // @synthesize bBuyFlag=_bBuyFlag;
@property(retain, nonatomic) NSString *CurStockCode; // @synthesize CurStockCode=_CurStockCode;
@property(retain, nonatomic) NSString *CurStockName; // @synthesize CurStockName=_CurStockName;
//@property(retain, nonatomic) tztUIVCBaseView *tztTradeView; // @synthesize tztTradeView=_tztTradeView;
- (void)OnLongPress:(id)arg1;
- (void)OnFenXiang:(id)arg1 Date:(id)arg2;
- (id)transType2Content:(id)arg1;
- (void)tztDidKeyboardViewClicked:(id)arg1;
- (void)setTextArrtibutes:(id)arg1 forString:(id)arg2 andControl:(id)arg3;
- (void)setAccountTextArrtibutes;
- (void)tztRefreshWeb;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)tztNineGridView:(id)arg1 clickCellData:(id)arg2;
- (void)tztGroupRadioView:(id)arg1 selectAtIndex:(unsigned long long)arg2 forState:(_Bool)arg3;
- (void)tztRefreshData;
- (void)tztMutilPageViewDidAppear:(long long)arg1;
- (void)OnRequestStockData;
- (_Bool)tztDroplistView:(id)arg1 showlistview:(id)arg2;
- (void)tztDroplistView:(id)arg1 didSelectIndex:(long long)arg2;
- (void)tztDroplistViewGetData:(id)arg1;
- (void)tztDroplistViewBeginShowData:(id)arg1;
- (void)SetTransType:(id)arg1 nIndex_:(long long)arg2;
- (void)OnButton:(id)arg1;
- (void)OnButtonClick:(id)arg1;
- (void)TZTUIMessageBox:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)OnToolbarMenuClick:(id)arg1;
- (void)OnSendBuySell;
- (void)goBuySell;
- (_Bool)CheckInput;
- (void)showBuySellAmount;
- (void)DealLeve2RightData:(id)arg1;
- (void)clickPriceViewGetPrice:(id)arg1;
- (void)DealWithBuySell:(id)arg1;
- (unsigned long long)OnCommNotify:(unsigned long long)arg1 lParam_:(unsigned long long)arg2;
- (unsigned long long)OnRequestData:(unsigned long long)arg1 lParam_:(unsigned long long)arg2;
- (void)InquireHQData:(_Bool)arg1;
- (void)OnRefreshWithAccountType:(id)arg1 andMarketNo:(id)arg2;
- (void)OnRefreshWithAccountTypeEx:(id)arg1 andMarketNo:(id)arg2 bNeedReqdef:(_Bool)arg3;
- (void)OnRequestStockInfo;
- (void)OnRefresh;
- (void)setWTAccount:(id)arg1 andAccountType:(id)arg2;
- (void)setStockCode:(id)arg1;
- (void)tztUIBaseView:(id)arg1 focuseChanged:(id)arg2;
- (void)tztUIBaseView:(id)arg1 textchange:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)OnTimer;
- (void)setTipsShow:(id)arg1;
- (void)clearUnusedData;
- (void)ClearData;
- (void)ClearDataWithOutCode;
- (void)requestTrend;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNMsgType:(long long)arg1;
- (void)onSetViewRequest:(_Bool)arg1;
- (void)p_JYLabelBgColor:(id)arg1;

@end


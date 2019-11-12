//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "FaceRecogPayHandlerDelegate.h"
#import "MMUseCaseCallback.h"
#import "WCPayBankElementQueryCgiDelegate.h"
#import "WCPayFillCardInfoViewControllerDelegate.h"
#import "WCPayFillCardNumberViewControllerDelegate.h"
#import "WCPayGetPayUserDutyCgiDelegate.h"
#import "WCPayPayPwdViewControllerDelegate.h"
#import "WCPayPrivacyViewControllerDelegate.h"
#import "WCPayTenpayImportCardInfoViewControllerDelegate.h"
#import "WCPayVerifyPayCardViewControllerDelegate.h"

@class FaceRecogPayHandler, JSEvent, MMVoidCallback, NSString, WCBaseControlLogic, WCPayBankElementQueryCgi, WCPayBindCardSuccessResponse, WCPayGetPayUserDutyCgi, WCPayRealnameAuthenReq, WCPayRealnameAuthenResp, WCPaySetUserExInfoCgi, WCRedEnvelopesControlData;

@interface WCPayAddPayCardLogic : WCPayControlLogic <FaceRecogPayHandlerDelegate, WCPayPrivacyViewControllerDelegate, WCPayGetPayUserDutyCgiDelegate, WCPayBankElementQueryCgiDelegate, MMUseCaseCallback, WCPayFillCardInfoViewControllerDelegate, WCPayFillCardNumberViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayTenpayImportCardInfoViewControllerDelegate>
{
    int m_uiLogicFinishedStatus;
    int m_uiWCPayAddPayCardLogicScene;
    JSEvent *m_jsEvent;
    NSString *m_nsAddPayCardToken;
    WCRedEnvelopesControlData *m_redEnvelopesData;
    _Bool m_isWebankLoanScene;
    _Bool m_canPassPwd;
    NSString *m_usertoken;
    _Bool _bIsFromJsAddPayCard;
    _Bool _bFromKinda;
    WCBaseControlLogic *_fromControlLogic;
    id <WCPayAddPayCardDelegate> _payCardDelegate;
    MMVoidCallback *_successCallback;
    MMVoidCallback *_cancelCallback;
    WCPayRealnameAuthenReq *_realnameAuthenReq;
    WCPayRealnameAuthenResp *_realnameAuthenResp;
    WCPaySetUserExInfoCgi *_setUserExInfoCgi;
    WCPayBindCardSuccessResponse *_m_bindCardSuccessResponse;
    WCPayGetPayUserDutyCgi *_m_getPayUserDutyCgi;
    WCPayBankElementQueryCgi *_m_getBankElementCgi;
    FaceRecogPayHandler *_faceHandler;
}

- (void).cxx_destruct;
- (void)EndWCPayAddPayCardLogic;
- (void)EndWCPayAddPayCardLogic:(id)arg1;
- (void)EndWCPayAddPayCardLogic:(id)arg1 withDelay:(_Bool)arg2;
- (void)FillCardInfoCancel;
- (void)FillCardInfoNext:(id)arg1;
- (void)FillCardInfoReadAgreement;
- (id)FillCardInfoRealnameReq;
- (void)FillCardNumberBackToRefreshCardList;
- (void)FillCardNumberCancel:(_Bool)arg1;
- (void)FillCardNumberConfirmWithImage:(id)arg1 cardNumber:(id)arg2 data:(id)arg3;
- (void)FillCardNumberNext:(id)arg1;
- (id)FillCardNumberRealnameReq;
- (id)FillCardNumberRealnameResp;
- (unsigned int)FillCardNumberSource;
- (_Bool)NeedShowServiceAppInfo;
- (void)OnBindCardVerifyCard:(id)arg1 Error:(id)arg2;
- (void)OnBindCardVerifySMS:(id)arg1 Error:(id)arg2 repsonse:(id)arg3;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnHandleVerifiedSMSString:(id)arg1;
- (void)OnSetWCPayPasswordInBind:(id)arg1 repsonse:(id)arg2;
- (void)OnTenpayImportBindQuery:(id)arg1 AppInfo:(id)arg2 UsrVerifiedInfo:(id)arg3 Error:(id)arg4;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1 andRetToken:(id)arg2;
- (void)OnWCPayGetBankResource:(id)arg1 Error:(id)arg2;
- (void)OnWCPayGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 userExInfoResponse:(id)arg3 Error:(id)arg4;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)SetPayPwdNext:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardBack;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)WCPayTenpayImportCardInfoViewControllerCancel;
- (void)WCPayTenpayImportCardInfoViewControllerNext;
- (void)WCPayTenpayImportCardInfoViewControllerReadAgreement;
@property(nonatomic) _Bool bFromKinda; // @synthesize bFromKinda=_bFromKinda;
@property(nonatomic) _Bool bIsFromJsAddPayCard; // @synthesize bIsFromJsAddPayCard=_bIsFromJsAddPayCard;
- (void)call:(id)arg1;
@property(retain, nonatomic) MMVoidCallback *cancelCallback; // @synthesize cancelCallback=_cancelCallback;
- (void)dealloc;
@property(retain) FaceRecogPayHandler *faceHandler; // @synthesize faceHandler=_faceHandler;
- (void)faceRecogPayHandlerDidCancel:(id)arg1;
- (void)faceRecogPayHandlerDidFinish:(id)arg1;
@property(retain, nonatomic) WCBaseControlLogic *fromControlLogic; // @synthesize fromControlLogic=_fromControlLogic;
- (id)getWCPayBindInfo:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithJSEvent:(id)arg1;
- (id)initWithRedEnvelopesData:(id)arg1;
- (void)jumpSuccessViewController;
@property(retain, nonatomic) WCPayBindCardSuccessResponse *m_bindCardSuccessResponse; // @synthesize m_bindCardSuccessResponse=_m_bindCardSuccessResponse;
@property(retain, nonatomic) WCPayBankElementQueryCgi *m_getBankElementCgi; // @synthesize m_getBankElementCgi=_m_getBankElementCgi;
@property(retain, nonatomic) WCPayGetPayUserDutyCgi *m_getPayUserDutyCgi; // @synthesize m_getPayUserDutyCgi=_m_getPayUserDutyCgi;
@property(nonatomic) int m_uiWCPayAddPayCardLogicScene; // @synthesize m_uiWCPayAddPayCardLogicScene;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)onErrorAlertViewStopLogic:(id)arg1;
- (void)onWCPayBindCardSuccessViewControllerClickDone;
- (id)onWCPayBindCardSuccessViewControllerRequestResponse;
- (void)onWCPayGetPayUserDutyCgiError:(id)arg1;
- (void)onWCPayGetPayUserDutyCgiResp:(id)arg1;
- (void)onWCPayPrivacyViewControllerClickAgree:(_Bool)arg1;
- (void)passwordInit;
@property(nonatomic) __weak id <WCPayAddPayCardDelegate> payCardDelegate; // @synthesize payCardDelegate=_payCardDelegate;
@property(retain) WCPayRealnameAuthenReq *realnameAuthenReq; // @synthesize realnameAuthenReq=_realnameAuthenReq;
@property(retain) WCPayRealnameAuthenResp *realnameAuthenResp; // @synthesize realnameAuthenResp=_realnameAuthenResp;
@property(retain, nonatomic) WCPaySetUserExInfoCgi *setUserExInfoCgi; // @synthesize setUserExInfoCgi=_setUserExInfoCgi;
@property(retain, nonatomic) MMVoidCallback *successCallback; // @synthesize successCallback=_successCallback;
- (void)showGiveUpLogicAlert;
- (void)startAddCardLogic;
- (void)startFaceReg;
- (void)startFromJsApi;
- (void)startGetPayUserDuty;
- (void)startLogic;
- (void)startTenpayImportCardLogic;
- (void)stopLogic;
- (void)stopLogicToMyPayCardView;
- (void)stopLogicToRefreshPayCardList;
- (void)webViewReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

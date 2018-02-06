//
//  VideoHeaders.h
//  Video
//
//  Created by xiaoyuan on 2018/1/13.
//  Copyright © 2018年 alpface. All rights reserved.
//

#ifndef VideoHeaders_h
#define VideoHeaders_h

#import <UIKit/UIKit.h>

typedef id CDUnknownBlockType;

@class NSDictionary, NSNumber, NSString;
@class SSHttpOperation, ArticleAPNsManager;

@interface TTFActivityInfo : NSObject //GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long activityId; // @dynamic activityId;
@property(copy, nonatomic) NSString *labelURL; // @dynamic labelURL;
@property(nonatomic) long long plannedTime; // @dynamic plannedTime;
@property(copy, nonatomic) NSString *prizeColor; // @dynamic prizeColor;
@property(copy, nonatomic) NSString *prizeString; // @dynamic prizeString;

@end


@protocol ArticleAPNsManagerDelegate <NSObject>
    
    @optional
- (BOOL)apnsManager:(ArticleAPNsManager *)arg1 canPresentViewControllerToUserID:(NSString *)arg2;
- (void)apnsManager:(ArticleAPNsManager *)arg1 customAction:(NSString *)arg2;
- (void)apnsManager:(ArticleAPNsManager *)arg1 handleUserInfoContainsID:(NSString *)arg2;
    @end

@protocol TTGetTopNaviControllerProtocol <NSObject>
- (UINavigationController *)getAppTopNavigationController;
- (UINavigationController *)navigationController;
@end


//@interface TTVUserAccount ()
//    {
//        BOOL _followed;
//        BOOL _subscribed;
//        BOOL _isVerified;
//        NSString *_screenName;
//        NSString *_userDesc;
//        NSString *_avatarURLString;
//        NSString *_verifiedContent;
//        NSString *_shareURL;
//        NSString *_mediaID;
//        NSString *_userID;
//        NSNumber *_cursor;
//        NSDictionary *_authInfo;
//        int _fansCount;
//        int _followCount;
//        int _videoCount;
//        int _playCount;
//        int _shareCount;
//        int _likeCount;
//        TTVUserAuthInfo *_userAuthInfo;
//    }
//
//+ (id)keyMapper;
//+ (BOOL)propertyIsOptional:(id)arg1;
//    @property(copy, nonatomic) NSDictionary *authInfo; // @synthesize authInfo=_authInfo;
//    @property(copy, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString;
//    @property(copy, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
//    @property(nonatomic) int fansCount; // @synthesize fansCount=_fansCount;
//    @property(nonatomic) int followCount; // @synthesize followCount=_followCount;
//    @property(nonatomic) BOOL followed; // @synthesize followed=_followed;
//- (BOOL)isLoginUser;
//    @property(nonatomic) BOOL isVerified; // @synthesize isVerified=_isVerified;
//    @property(nonatomic) int likeCount; // @synthesize likeCount=_likeCount;
//    @property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
//    @property(nonatomic) int playCount; // @synthesize playCount=_playCount;
//    @property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
//    @property(nonatomic) int shareCount; // @synthesize shareCount=_shareCount;
//    @property(copy, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
//    @property(nonatomic) BOOL subscribed; // @synthesize subscribed=_subscribed;
//    @property(retain, nonatomic) TTVUserAuthInfo *userAuthInfo; // @synthesize userAuthInfo=_userAuthInfo;
//    @property(copy, nonatomic) NSString *userDesc; // @synthesize userDesc=_userDesc;
//    @property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
//    @property(copy, nonatomic) NSString *verifiedContent; // @synthesize verifiedContent=_verifiedContent;
//    @property(nonatomic) int videoCount; // @synthesize videoCount=_videoCount;
//
//    @end



@class NSString, TTVUserAccount;

@protocol TTVMessageNewVideoServiceDelegate <NSObject>
- (void)messageNewVideoDidReceived:(NSString *)arg1 userModel:(TTVUserAccount *)arg2;
    @end



@interface TTVMessageNewVideoService : NSObject
    {
        id <TTVMessageNewVideoServiceDelegate> _delegate;
    }
    
- (void)dealloc;
    @property(nonatomic) __weak id <TTVMessageNewVideoServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)receivedNewVideoMessage:(id)arg1;
    
    @end


@interface CategorySelectorView: UIView
    
@end

@interface TTCollectionPageViewController : UIViewController

@end

@interface TTVideoTabViewController: UIViewController
    
@property(retain, nonatomic) UIView *barView; // @synthesize barView=_barView;
@property(nonatomic) float bottomInset; // @synthesize bottomInset=_bottomInset;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) CategorySelectorView *categorySelectorView; // @synthesize 
- (void)categorySelectorView:(id)arg1 didClickSearchButton:(id)arg2;
- (void)categorySelectorView:(id)arg1 selectCategory:(id)arg2;
- (void)connectionChanged:(id)arg1;
- (void)dealloc;
- (void)feedRefreshButtonPressed:(id)arg1;
- (void)fetchCategoryData;
- (void)finishLoading;
//    @property(retain, nonatomic) TTVFollowVideoMessageFloatingView *floatingView; // @synthesize floatingView=_floatingView;
- (void)handleRefreshButtonSettingEnabledNotification:(id)arg1;
- (id)headerViewForCell:(id)arg1;
- (void)hiddenFeedRefreshViewIfNeeded;
- (void)initNavigationBar;
- (id)initWithCoder:(id)arg1;
    @property(nonatomic) int lastSelectedPageIndex; // @synthesize lastSelectedPageIndex=_lastSelectedPageIndex;
- (void)listViewOfTTCollectionPageCellEndLoading:(id)arg1 isFinish:(BOOL)arg2 isUserPull:(BOOL)arg3;
- (void)listViewOfTTCollectionPageCellStartLoading:(id)arg1;
- (void)messageBubbleDidReceived:(id)arg1;
    @property(copy, nonatomic) NSString *messageContent; // @synthesize messageContent=_messageContent;
- (void)messageNewVideoDidReceived:(id)arg1 userModel:(id)arg2;
    @property(retain, nonatomic) TTVMessageNewVideoService *messageNewVideoService; // @synthesize messageNewVideoService=_messageNewVideoService;
- (void)numbersOfUnreadNewVideoMessageChanged:(int)arg1;
    @property(retain, nonatomic) TTCollectionPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (void)pageViewController:(id)arg1 didPagingToIndex:(int)arg2;
- (void)pageViewController:(id)arg1 didSkipToIndex:(int)arg2;
- (void)pageViewController:(id)arg1 pagingFromIndex:(int)arg2 toIndex:(int)arg3 completePercent:(float)arg4;
- (void)pageViewController:(id)arg1 willPagingToIndex:(int)arg2;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)receiveVideoTabbarClickedNotification:(id)arg1;
- (void)searchButtonTouched;
- (float)selectorViewHeight;
- (void)setInset;
    @property(nonatomic) float topInset; // @synthesize topInset=_topInset;
    @property(retain, nonatomic) TTVUserAccount *userModel; // @synthesize userModel=_userModel;
    @property(nonatomic) BOOL videoTabbarClickedRefresh; // @synthesize videoTabbarClickedRefresh=_videoTabbarClickedRefresh;
- (void)setupConstraints;
- (void)setupFeedRefreshView;
- (BOOL)shouldAnimateRefreshViewWithPageCell:(id)arg1;
- (BOOL)shouldAutorotate;
- (void)showFollowMessageFloatView;
- (void)startLoading;
- (float)statusBarHeight;
- (unsigned int)supportedInterfaceOrientations;
- (void)trackEndedByAppWillEnterBackground;
- (void)trackStartedByAppWillEnterForground;
- (void)tryShowFollowMessageFloatView;
- (struct CGRect)ttBubbleViewFrame;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

@interface TTFBaseViewController : UIViewController <UIGestureRecognizerDelegate>
    {
        BOOL _ttf_hideStatusBar;
        BOOL _ttf_enableInteractivePopGestureRecognizer;
        BOOL _ttf_customStautsBarEnable;
        int _ttf_statusBarStyle;
    }
    
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (int)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
    @property(nonatomic) BOOL ttf_customStautsBarEnable; // @synthesize ttf_customStautsBarEnable=_ttf_customStautsBarEnable;
    @property(nonatomic) BOOL ttf_enableInteractivePopGestureRecognizer; // @synthesize ttf_enableInteractivePopGestureRecognizer=_ttf_enableInteractivePopGestureRecognizer;
    @property(nonatomic) BOOL ttf_hideStatusBar; // @synthesize ttf_hideStatusBar=_ttf_hideStatusBar;
    @property(nonatomic) int ttf_statusBarStyle; // @synthesize ttf_statusBarStyle=_ttf_statusBarStyle;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (void)ttf_dismissSelf;
- (void)viewDidAppear:(BOOL)arg1;
    
@end

@class TTFQuizShowLiveRoomViewController;

@protocol TTFQuizShowLiveRoomViewControllerProtocol <NSObject>
- (void)quizShowLiveRoomClose:(TTFQuizShowLiveRoomViewController *)arg1;
@end


@class TTFQuestionAnswerUnit;

@protocol TTFQuizShowLiveRoomQuestionAnswerDelegate <NSObject>
- (void)didFailedWithQuestionAnswerUnit:(TTFQuestionAnswerUnit *)arg1;
- (void)networkFailedWithQuestionAnswerUnit:(TTFQuestionAnswerUnit *)arg1;
- (void)showAnswerWithQuestionAnswerUnit:(TTFQuestionAnswerUnit *)arg1;
- (void)showQuestionWithQuestionAnswerUnit:(TTFQuestionAnswerUnit *)arg1;
@end

@protocol TTFQuestionAnswerUnitDelegate <NSObject>
- (void)userAnswerErrorOfQuestionAnswerUnit:(TTFQuestionAnswerUnit *)arg1;
- (void)userAnswerExceptionOfQuestionAnswerUnit:(TTFQuestionAnswerUnit *)arg1;
- (void)userNetworkErrorOfQuestionAnswerUnit:(TTFQuestionAnswerUnit *)arg1;
@end

@interface TTFHeartBeatTrace : NSObject
{
    BOOL _isFromWs;
//    TTFHeartBeatStruct *_heartbeat;
    id _heartbeat;
    int _htStatus;
    long long _activityId;
    long long _localTime;
    long long _htTime;
}

@property(nonatomic) long long activityId; // @synthesize activityId=_activityId;
- (id)description;
@property(retain, nonatomic) id heartbeat; // @synthesize heartbeat=_heartbeat;
@property(nonatomic) int htStatus; // @synthesize htStatus=_htStatus;
@property(nonatomic) long long htTime; // @synthesize htTime=_htTime;
- (id)init;
- (id)initWithHeartBeat:(id)arg1;
@property(nonatomic) BOOL isFromWs; // @synthesize isFromWs=_isFromWs;
@property(nonatomic) long long localTime; // @synthesize localTime=_localTime;
- (id)traceDict;

@end


@protocol TTFHeartBeatServiceDelegate <NSObject>
- (void)didReceiveHeartbeat:(TTFHeartBeatTrace *)arg1;
@end

@interface TTFLiveStreamInfo : NSObject
{
    int _defaultRes;
    int _defaultBufferMs;
    NSDictionary *_resolutionDict;
    NSString *_app;
    NSString *_stream;
    NSDictionary *_play_list;
}

@property(copy, nonatomic) NSString *app; // @synthesize app=_app;
@property(nonatomic) int defaultBufferMs; // @synthesize defaultBufferMs=_defaultBufferMs;
@property(nonatomic) int defaultRes; // @synthesize defaultRes=_defaultRes;
- (id)getStreamsForRes:(int)arg1;
- (id)initWithDict:(id)arg1;
@property(retain, nonatomic) NSDictionary *play_list; // @synthesize play_list=_play_list;
@property(copy, nonatomic) NSDictionary *resolutionDict; // @synthesize resolutionDict=_resolutionDict;
@property(copy, nonatomic) NSString *stream; // @synthesize stream=_stream;
- (id)supportedResolutions;

@end

@class TTFLiveStreamInfo, TTFQuizShowLiveRoomViewModel;

@protocol TTFQuizShowLiveRoomDelegate <NSObject>
- (void)didFailedFetchingLiveStreamInfo;
- (void)fetchedLivingStreamInfo:(TTFLiveStreamInfo *)arg1;
- (void)quizShowActivityChangeToStatus:(int)arg1;
- (void)quizShowFinishedWithViewModel:(TTFQuizShowLiveRoomViewModel *)arg1;
- (void)quizShowLiveRoomInitCompletedWithSuccess:(BOOL)arg1;
- (void)quizShowLiveRoomUsersCountChange;
- (void)quizShowSuccess;
- (void)quizShowUsedLife;
@end



@class CADisplayLink, NSArray, NSString, TTFActivityConfigStruct, TTFAuthStruct, TTFCeremonyStruct, TTFFetchLiveInfoTrace, TTFGeneralControlStruct, TTFIndexTrace, TTFLastAnswerInfo, TTFQuestionAnswerUnit, TTFUserStruct;

@interface TTFQuizShowLiveRoomViewModel : NSObject <TTFQuestionAnswerUnitDelegate, TTFHeartBeatServiceDelegate>
{
    BOOL _isSign;
    BOOL _isLiveRoomIndexSuccess;
    BOOL _isLiveRoomInitSuccess;
    BOOL _needUpgrade;
    BOOL _isInvitation;
    BOOL _kickoutNetError;
    BOOL _isQuizshowSuccess;
    BOOL _isFetchingStreamInfo;
    id <TTFQuizShowLiveRoomDelegate> _delegate;
    id <TTFQuizShowLiveRoomQuestionAnswerDelegate> _questionAnswerDelegate;
    NSString *_enterFromStr;
    TTFUserStruct *_curUser;
    NSArray *_livingStreamUrls;
    TTFAuthStruct *_authInfo;
    TTFLastAnswerInfo *_lastAnswerInfo;
    TTFCeremonyStruct *_ceremony;
    TTFActivityConfigStruct *_currentActivity;
    TTFActivityConfigStruct *_nextActivity;
    int _activityStatus;
    NSString *_curSignCountStr;
    TTFQuestionAnswerUnit *_currentQuestionAnswerUnit;
    int _netFailedQuestionID;
    int _countDown;
    int _commentInterval;
    int _submitRetryCount;
    int _submitRetryTimeout;
    NSString *_upgradeTips;
    TTFGeneralControlStruct *_generalControl;
    CADisplayLink *_countDownDisplayLink;
    int _indexRetryIndex;
    int _getStreamRetryIndex;
    TTFIndexTrace *_indexTrace;
    TTFFetchLiveInfoTrace *_fetchLiveInfoTrace;
    long long _curSignCount;
    long long _curUsersCount;
    long long _maxParticipateCount;
    long long _startTime;
}

+ (id)formatTimestamp:(long long)arg1;
+ (id)formatToBonus:(long long)arg1;
+ (id)formattedStringWithAllBonus:(long long)arg1;
+ (id)formattedStringWithMyBonus:(long long)arg1;
- (void)_getStreamInfo;
- (void)_indexWithActivityID:(long long)arg1;
@property(nonatomic) int activityStatus; // @synthesize activityStatus=_activityStatus;
@property(retain, nonatomic) TTFAuthStruct *authInfo; // @synthesize authInfo=_authInfo;
@property(retain, nonatomic) TTFCeremonyStruct *ceremony; // @synthesize ceremony=_ceremony;
- (void)checkActivityStatus;
- (void)checkInvitationCode:(id)arg1 completionBlock:(id)arg2;
@property(nonatomic) int commentInterval; // @synthesize commentInterval=_commentInterval;
- (int)commentRefreshInterval;
@property(nonatomic) int countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) CADisplayLink *countDownDisplayLink; // @synthesize countDownDisplayLink=_countDownDisplayLink;
@property(nonatomic) long long curSignCount; // @synthesize curSignCount=_curSignCount;
@property(copy, nonatomic) NSString *curSignCountStr; // @synthesize curSignCountStr=_curSignCountStr;
@property(retain, nonatomic) TTFUserStruct *curUser; // @synthesize curUser=_curUser;
@property(nonatomic) long long curUsersCount; // @synthesize curUsersCount=_curUsersCount;
@property(retain, nonatomic) TTFActivityConfigStruct *currentActivity; // @synthesize currentActivity=_currentActivity;
@property(retain, nonatomic) TTFQuestionAnswerUnit *currentQuestionAnswerUnit; // @synthesize currentQuestionAnswerUnit=_currentQuestionAnswerUnit;
- (void)dealloc;
@property(nonatomic) __weak id <TTFQuizShowLiveRoomDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveHeartbeat:(id)arg1;
@property(retain, nonatomic) NSString *enterFromStr; // @synthesize enterFromStr=_enterFromStr;
@property(retain, nonatomic) TTFFetchLiveInfoTrace *fetchLiveInfoTrace; // @synthesize fetchLiveInfoTrace=_fetchLiveInfoTrace;
@property(retain, nonatomic) TTFGeneralControlStruct *generalControl; // @synthesize generalControl=_generalControl;
- (id)getActivityStatusStringForTracker;
- (void)getStreamInfo;
@property(nonatomic) int getStreamRetryIndex; // @synthesize getStreamRetryIndex=_getStreamRetryIndex;
@property(nonatomic) int indexRetryIndex; // @synthesize indexRetryIndex=_indexRetryIndex;
@property(retain, nonatomic) TTFIndexTrace *indexTrace; // @synthesize indexTrace=_indexTrace;
- (id)init;
- (BOOL)isActivityEnd;
- (BOOL)isActivityGetOn;
@property(nonatomic) BOOL isFetchingStreamInfo; // @synthesize isFetchingStreamInfo=_isFetchingStreamInfo;
@property(nonatomic) BOOL isInvitation; // @synthesize isInvitation=_isInvitation;
@property(nonatomic) BOOL isLiveRoomIndexSuccess; // @synthesize isLiveRoomIndexSuccess=_isLiveRoomIndexSuccess;
@property(nonatomic) BOOL isLiveRoomInitSuccess; // @synthesize isLiveRoomInitSuccess=_isLiveRoomInitSuccess;
@property(nonatomic) BOOL isQuizshowSuccess; // @synthesize isQuizshowSuccess=_isQuizshowSuccess;
@property(nonatomic) BOOL isSign; // @synthesize isSign=_isSign;
@property(nonatomic) BOOL kickoutNetError; // @synthesize kickoutNetError=_kickoutNetError;
@property(retain, nonatomic) TTFLastAnswerInfo *lastAnswerInfo; // @synthesize lastAnswerInfo=_lastAnswerInfo;
- (void)leaveDashboard;
@property(retain, nonatomic) NSArray *livingStreamUrls; // @synthesize livingStreamUrls=_livingStreamUrls;
@property(readonly, nonatomic) long long maxParticipateCount; // @synthesize maxParticipateCount=_maxParticipateCount;
@property(nonatomic) BOOL needUpgrade; // @synthesize needUpgrade=_needUpgrade;
@property(nonatomic) int netFailedQuestionID; // @synthesize netFailedQuestionID=_netFailedQuestionID;
@property(retain, nonatomic) TTFActivityConfigStruct *nextActivity; // @synthesize nextActivity=_nextActivity;
- (void)operateCeremonyWithHeartbeat:(id)arg1;
- (void)operateDistributeAndAnswerStatusWithHeartbeat:(id)arg1;
- (void)operateRevealAnswerWithHeartbeat:(id)arg1;
@property(nonatomic) __weak id <TTFQuizShowLiveRoomQuestionAnswerDelegate> questionAnswerDelegate; // @synthesize questionAnswerDelegate=_questionAnswerDelegate;
- (void)quizShowLiveRoomIndexWithActivityID:(long long)arg1;
- (void)quizShowLiveRoomInit;
- (void)recoverLifesIfNeed;
- (void)setNotNeedInit;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int submitRetryCount; // @synthesize submitRetryCount=_submitRetryCount;
@property(nonatomic) int submitRetryTimeout; // @synthesize submitRetryTimeout=_submitRetryTimeout;
@property(copy, nonatomic) NSString *upgradeTips; // @synthesize upgradeTips=_upgradeTips;
- (void)signUpWithCompletionBlock:(id)arg1;
- (void)startCountDown;
- (void)updateInviteCodeInfoWithCompletionBlock:(id)arg1;
- (void)userAnswerErrorOfQuestionAnswerUnit:(id)arg1;
- (void)userAnswerExceptionOfQuestionAnswerUnit:(id)arg1;
- (void)userNetworkErrorOfQuestionAnswerUnit:(id)arg1;


@end

@protocol TTFResurrectionDelegate <NSObject>
- (void)resurrectShare;
@end

@class TTFQuestionAnswerView;

@protocol TTFQAViewDelegate <NSObject>
- (void)questionAnswerViewDidHidden:(TTFQuestionAnswerView *)arg1;
@end


@class TTFQuestionOptionView;

@protocol TTFQuestionOptionViewDelegate <NSObject>
- (void)optionViewBeClicked:(TTFQuestionOptionView *)arg1;
@end

@class CAShapeLayer, TTFOptionStruct, UILabel;

/// 2.2.9 api
@interface TTFQuestionOptionView : UIView
{
    BOOL _selected;
    id <TTFQuestionOptionViewDelegate> _delegate;
    UILabel *_optionTextLabel;
    TTFOptionStruct *_option;
    CAShapeLayer *_shapeLayer;
    UILabel *_choosenUserCountLabel;
    UIButton *_chooseButton;
}

- (void)beClicked:(id)arg1;
@property(retain, nonatomic) UIButton *chooseButton; // @synthesize chooseButton=_chooseButton;
@property(retain, nonatomic) UILabel *choosenUserCountLabel; // @synthesize choosenUserCountLabel=_choosenUserCountLabel;
@property(nonatomic) __weak id <TTFQuestionOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initUIComponents;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) TTFOptionStruct *option; // @synthesize option=_option;
@property(retain, nonatomic) UILabel *optionTextLabel; // @synthesize optionTextLabel=_optionTextLabel;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (void)setOption:(id)arg1 index:(int)arg2 isReveal:(BOOL)arg3 userChoosen:(BOOL)arg4 choosenRate:(float)arg5;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;

@end


@class GPBMessage;

@class CAGradientLayer, CAShapeLayer, NSMutableArray, NSString, TTFPlayer, TTFQuestionAnswerUnit, TTFRebirthCardAnimationView, TTFResultTipsView, TTFTimeUpView, UIImageView, UILabel;

@interface TTFQuestionAnswerView : UIView <TTFQuestionOptionViewDelegate>
{
    BOOL _isQAViewShow;
    BOOL _isPlayerContainerViewAnimationFinish;
    BOOL _hasShowTimeUp;
    id <TTFQAViewDelegate> _delegate;
    TTFQuestionAnswerUnit *_questionAnswerUnit;
    TTFPlayer *_player;
    UIView *_qaContainerView;
    UIImageView *_qaContainerHeaderView;
    UIView *_qaContainerBackgroundView;
    CAShapeLayer *_countdownShapeLayer;
    UILabel *_remainingAnswerTimeFirstLabel;
    UILabel *_remainingAnswerTimeSecondLabel;
    TTFTimeUpView *_timeUpView;
    UILabel *_timeUpLabel;
    UILabel *_questionLabel;
    UIView *_questionLabelMaskView;
    CAGradientLayer *_questionLabelGradientLayer;
    NSMutableArray *_optionViews;
    TTFResultTipsView *_tipsView;
    UILabel *_watchingTipsLabel;
    UILabel *_questionBonusLabel;
    UIView *_playerContainerView;
    unsigned long _curRemainingAnswerTime;
    TTFRebirthCardAnimationView *_animateView;
    UIView *_specialQuestionHintContainerView;
}

@property(retain, nonatomic) TTFRebirthCardAnimationView *animateView; // @synthesize animateView=_animateView;
@property(retain, nonatomic) CAShapeLayer *countdownShapeLayer; // @synthesize countdownShapeLayer=_countdownShapeLayer;
@property(nonatomic) unsigned long curRemainingAnswerTime; // @synthesize curRemainingAnswerTime=_curRemainingAnswerTime;
- (void)dealloc;
@property(nonatomic) __weak id <TTFQAViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getQuestionAttributedString;
@property(nonatomic) BOOL hasShowTimeUp; // @synthesize hasShowTimeUp=_hasShowTimeUp;
- (float)heightWithQuestionAnswerUnit:(id)arg1;
- (void)hideWithAnimated:(BOOL)arg1;
- (void)initUIComponents;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL isPlayerContainerViewAnimationFinish; // @synthesize isPlayerContainerViewAnimationFinish=_isPlayerContainerViewAnimationFinish;
@property(nonatomic) BOOL isQAViewShow; // @synthesize isQAViewShow=_isQAViewShow;
- (void)optionViewBeClicked:(id)arg1;
@property(retain, nonatomic) NSMutableArray *optionViews; // @synthesize optionViews=_optionViews;
@property(nonatomic) __weak TTFPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(retain, nonatomic) UIView *qaContainerBackgroundView; // @synthesize qaContainerBackgroundView=_qaContainerBackgroundView;
@property(retain, nonatomic) UIImageView *qaContainerHeaderView; // @synthesize qaContainerHeaderView=_qaContainerHeaderView;
@property(retain, nonatomic) UIView *qaContainerView; // @synthesize qaContainerView=_qaContainerView;
@property(retain, nonatomic) TTFQuestionAnswerUnit *questionAnswerUnit; // @synthesize questionAnswerUnit=_questionAnswerUnit;
@property(retain, nonatomic) UILabel *questionBonusLabel; // @synthesize questionBonusLabel=_questionBonusLabel;
@property(retain, nonatomic) UILabel *questionLabel; // @synthesize questionLabel=_questionLabel;
@property(retain, nonatomic) CAGradientLayer *questionLabelGradientLayer; // @synthesize questionLabelGradientLayer=_questionLabelGradientLayer;
@property(retain, nonatomic) UIView *questionLabelMaskView; // @synthesize questionLabelMaskView=_questionLabelMaskView;
@property(retain, nonatomic) UILabel *remainingAnswerTimeFirstLabel; // @synthesize remainingAnswerTimeFirstLabel=_remainingAnswerTimeFirstLabel;
@property(retain, nonatomic) UILabel *remainingAnswerTimeSecondLabel; // @synthesize remainingAnswerTimeSecondLabel=_remainingAnswerTimeSecondLabel;
@property(retain, nonatomic) UIView *specialQuestionHintContainerView; // @synthesize specialQuestionHintContainerView=_specialQuestionHintContainerView;
@property(retain, nonatomic) UILabel *timeUpLabel; // @synthesize timeUpLabel=_timeUpLabel;
@property(retain, nonatomic) TTFTimeUpView *timeUpView; // @synthesize timeUpView=_timeUpView;
@property(retain, nonatomic) TTFResultTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UILabel *watchingTipsLabel; // @synthesize watchingTipsLabel=_watchingTipsLabel;
- (void)showAnswerWithQuestionAnswerUnit:(id)arg1;
- (void)showLineOfIndex:(unsigned int)arg1 withLineOrigins:(id)arg2 lineHeights:(id)arg3 offset:(float)arg4 lineTopGap:(float)arg5 eachLineShowDuration:(float)arg6;
- (void)showQuestionWithQuestionAnswerUnit:(id)arg1;
- (id)ttf_formattedStringWithUserCount:(long long)arg1;
- (BOOL)ttf_isSpecialQuestion;
- (void)ttf_showSpecialQuestionHint;
- (id)ttf_specialQuestionHintStringsWhenAnswerShown;
- (void)updateQuestionBonusUIWithBonus:(long long)arg1;


@end



@class UIButton, UIControl, UIImageView, UILabel;

@interface TTFResurrectionTipView : UIView
{
    id <TTFResurrectionDelegate> _delegate;
    id _shareTapped;
    UIButton *_touchControl;
    UILabel *_topTipLabel;
    UIButton *_iconButton;
    UIView *_linkedLine;
    UIControl *_bottomTipControl;
    UILabel *_bottomTipLabel;
    UIImageView *_arrowIconView;
}

@property(retain, nonatomic) UIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) UIControl *bottomTipControl; // @synthesize bottomTipControl=_bottomTipControl;
@property(retain, nonatomic) UILabel *bottomTipLabel; // @synthesize bottomTipLabel=_bottomTipLabel;
- (void)buttonTouched;
@property(nonatomic) __weak id <TTFResurrectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enableLife:(BOOL)arg1;
- (void)expendTip;
- (void)hideViews:(BOOL)arg1;
@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
- (void)initComponents;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *linkedLine; // @synthesize linkedLine=_linkedLine;
- (void)setHasLife:(BOOL)arg1;
- (void)setLifes:(int)arg1;
@property(copy, nonatomic) id shareTapped; // @synthesize shareTapped=_shareTapped;
@property(retain, nonatomic) UILabel *topTipLabel; // @synthesize topTipLabel=_topTipLabel;
@property(retain, nonatomic) UIButton *touchControl; // @synthesize touchControl=_touchControl;
- (void)shrinkTip;

@end

@class TTFPlayer;

@protocol TTFPlayerDelegate <NSObject>

@optional
- (void)player:(TTFPlayer *)arg1 loadStateChanged:(int)arg2;
- (void)playerDidFailed:(TTFPlayer *)arg1;
- (void)playerIsReady:(TTFPlayer *)arg1;
- (void)playerRenderStart:(TTFPlayer *)arg1;
@end

@class TTFClearanceUsersView;

@protocol TTFClearanceUsersViewDelegate <NSObject>
- (void)clearanceUsersViewDidHide:(TTFClearanceUsersView *)arg1;
- (void)clearanceUsersViewEnterTopWinnerListViewController:(TTFClearanceUsersView *)arg1;
- (void)clearanceUsersViewTriggerShareAction:(TTFClearanceUsersView *)arg1;
- (void)clearanceUsersViewTriggerSignUpNextActivityAction:(TTFClearanceUsersView *)arg1 signUpTriggerBlock:(void (^)(void))arg2;
@end

@class TTFEliminateDefeatView, TTFQuestionAnswerUnit;

@protocol TTFEliminateDefeatViewDelegate <NSObject>
- (void)shareRecordOfEliminateDefeatView:(TTFEliminateDefeatView *)arg1 defeatCount:(long long)arg2 questionAnswerUnit:(TTFQuestionAnswerUnit *)arg3;
@end

@class TTFEliminateView, TTFQuestionAnswerUnit;

@protocol TTFEliminateViewDelegate <NSObject>
- (void)shareQuestionOfEliminateView:(TTFEliminateView *)arg1 withQuestionAnswerUnit:(TTFQuestionAnswerUnit *)arg2;
@end

@class TTFLateView;

@protocol TTFLateViewDelegate <NSObject>
- (void)inviteFriendsOfLateView:(TTFLateView *)arg1;
@end



@class LOTAnimationView, NSDate, NSMutableSet, NSString, NSTimer, TTFClearanceUsersView, TTFCountdownView, TTFInputInvitationCodeView, TTFPlayer, TTFQuestionAnswerView, TTFQuizShowLiveRoomViewModel, TTFResurrectionTipView, TTFTalkBoardViewController, TTVideoEngine, UIActivityIndicatorView, UIButton, UILabel, UITapGestureRecognizer, UIView;

@protocol TTFPlayerDelegate, TTFClearanceUsersViewDelegate, TTFQAViewDelegate, TTFQuizShowLiveRoomDelegate, TTFEliminateDefeatViewDelegate, TTFEliminateDefeatViewDelegate, TTFEliminateViewDelegate, TTFLateViewDelegate;

@interface TTFQuizShowLiveRoomViewController : TTFBaseViewController <TTFQuizShowLiveRoomQuestionAnswerDelegate, TTFQuizShowLiveRoomDelegate, TTFQAViewDelegate, TTFPlayerDelegate, TTFClearanceUsersViewDelegate, TTFResurrectionDelegate, TTFEliminateDefeatViewDelegate, TTFEliminateViewDelegate, TTFLateViewDelegate>
{
    BOOL _isFetchStreamInfoSuccess;
    BOOL _immediatelyEnterAfterIndex;
    BOOL _enterAgain;
    TTFPlayer *_player;
    UIActivityIndicatorView *_playerIndicatorView;
    TTVideoEngine *_videoEngine;
    LOTAnimationView *_logoLoopAnimationView;
    UIView *_containerView;
    UIButton *_shareButton;
    TTFResurrectionTipView *_resurrectionView;
    UIView *_redDotView;
    UILabel *_usersCountLabel;
    UIButton *_closeButton;
    TTFQuestionAnswerView *_questionAnswerView;
    TTFCountdownView *_countdownView;
    UIButton *_loginButton;
    TTFTalkBoardViewController *_talkboardViewController;
    UITapGestureRecognizer *_hideKeyboardGesture;
    LOTAnimationView *_fireworkAnimationView;
    TTFClearanceUsersView *_clearanceUsersView;
    TTFInputInvitationCodeView *_inputInvitationCodeView;
    NSMutableSet *_curQuestionAnswerUserCountSet;
    NSTimer *_logoLoopTimer;
    id <TTFQuizShowLiveRoomViewControllerProtocol> _delegate;
    TTFQuizShowLiveRoomViewModel *_viewModel;
}

+ (void)prepareForQuizShowLiveRoom;
@property(retain, nonatomic) NSDate *beginLiveTimeDate;
@property(retain, nonatomic) NSDate *beginWatchTimeDate;
@property(retain, nonatomic) TTFClearanceUsersView *clearanceUsersView; // @synthesize clearanceUsersView=_clearanceUsersView;
- (void)clearanceUsersViewDidHide:(id)arg1;
- (void)clearanceUsersViewEnterTopWinnerListViewController:(id)arg1;
- (void)clearanceUsersViewTriggerShareAction:(id)arg1;
- (void)clearanceUsersViewTriggerSignUpNextActivityAction:(id)arg1 signUpTriggerBlock:(id)arg2;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)closeLiveRoom;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)countdownShare:(id)arg1;
@property(retain, nonatomic) TTFCountdownView *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) NSMutableSet *curQuestionAnswerUserCountSet; // @synthesize curQuestionAnswerUserCountSet=_curQuestionAnswerUserCountSet;
- (void)dealloc;
@property(nonatomic) __weak id <TTFQuizShowLiveRoomViewControllerProtocol> delegate; // @synthesize delegate=_delegate;
- (void)didFailedFetchingLiveStreamInfo;
- (void)didFailedWithQuestionAnswerUnit:(id)arg1;
- (void)endTrackStayPage:(BOOL)arg1;
@property(nonatomic) BOOL enterAgain; // @synthesize enterAgain=_enterAgain;
- (id)extraDict;
- (void)fetchedLivingStreamInfo:(id)arg1;
@property(retain, nonatomic) LOTAnimationView *fireworkAnimationView; // @synthesize fireworkAnimationView=_fireworkAnimationView;
- (double)getLiveTimeTimeInterval;
- (double)getWatchTimeTimeInterval;
- (long long)getWrongItemNum;
- (void)help:(id)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *hideKeyboardGesture; // @synthesize hideKeyboardGesture=_hideKeyboardGesture;
@property(nonatomic) BOOL immediatelyEnterAfterIndex; // @synthesize immediatelyEnterAfterIndex=_immediatelyEnterAfterIndex;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithViewModel:(id)arg1 immediatelyEnterAfterIndex:(BOOL)arg2 enterAgain:(BOOL)arg3 delegate:(id)arg4;
- (void)inputInvitationCodeButtonDidClicked:(id)arg1;
@property(retain, nonatomic) TTFInputInvitationCodeView *inputInvitationCodeView; // @synthesize inputInvitationCodeView=_inputInvitationCodeView;
- (void)inviteFriendsOfLateView:(id)arg1;
@property(nonatomic) BOOL isFetchStreamInfoSuccess; // @synthesize isFetchStreamInfoSuccess=_isFetchStreamInfoSuccess;
@property(nonatomic) long long itemNum;
- (void)keyboardAnimationWithNotification:(id)arg1 isShow:(BOOL)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) LOTAnimationView *logoLoopAnimationView; // @synthesize logoLoopAnimationView=_logoLoopAnimationView;
@property(retain, nonatomic) NSTimer *logoLoopTimer; // @synthesize logoLoopTimer=_logoLoopTimer;
- (BOOL)needHideVideoEnginePlayerView;
- (void)networkFailedWithQuestionAnswerUnit:(id)arg1;
- (void)onReachabilityChangedNotification:(id)arg1;
@property(retain, nonatomic) TTFPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIActivityIndicatorView *playerIndicatorView; // @synthesize playerIndicatorView=_playerIndicatorView;
- (void)playerRenderStart:(id)arg1;
- (BOOL)prefersHomeIndicatorAutoHidden;
@property(retain, nonatomic) TTFQuestionAnswerView *questionAnswerView; // @synthesize questionAnswerView=_questionAnswerView;
- (void)questionAnswerViewDidHidden:(id)arg1;
- (void)quizShowActivityChangeToStatus:(int)arg1;
- (void)quizShowFinishedWithViewModel:(id)arg1;
- (void)quizShowLiveRoomInitCompletedWithSuccess:(BOOL)arg1;
- (void)quizShowLiveRoomUsersCountChange;
- (void)quizShowSuccess;
- (void)quizShowUsedLife;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
- (void)registerNotification;
- (void)removeNotification;
- (void)resurrectShare;
@property(retain, nonatomic) TTFResurrectionTipView *resurrectionView; // @synthesize resurrectionView=_resurrectionView;
- (void)setCurUserCountAttributedString;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) NSDate *stayBeginTime;
@property(retain, nonatomic) TTFTalkBoardViewController *talkboardViewController; // @synthesize talkboardViewController=_talkboardViewController;
@property(retain, nonatomic) UILabel *usersCountLabel; // @synthesize usersCountLabel=_usersCountLabel;
@property(retain, nonatomic) TTVideoEngine *videoEngine; // @synthesize videoEngine=_videoEngine;
@property(retain, nonatomic) TTFQuizShowLiveRoomViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)shareQuestionOfEliminateView:(id)arg1 withQuestionAnswerUnit:(id)arg2;
- (void)shareRecordOfEliminateDefeatView:(id)arg1 defeatCount:(long long)arg2 questionAnswerUnit:(id)arg3;
- (void)shareToFriends:(id)arg1;
- (void)showAnswerWithQuestionAnswerUnit:(id)arg1;
- (void)showQuestionWithQuestionAnswerUnit:(id)arg1;
- (void)signUp:(id)arg1;
- (void)startTrackStayPage;
- (void)trackerEnterLiveRoom;
- (void)ttf_accountStatusChangeNotification:(id)arg1;
- (void)ttf_applicationDidEnterBackground:(id)arg1;
- (void)ttf_applicationWillEnterForeground:(id)arg1;
- (void)uiComponentsInit;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;


@end


@class SSSplashView;

@protocol SSSplashViewDelegate <NSObject>
- (void)splashViewAnimationFinished:(SSSplashView *)arg1;
@end


@class NSDictionary, NSMutableDictionary, NSString, SSSplashView, TTNavigationController, UIWindow;

@interface NewsBaseDelegate : UIResponder <SSSplashViewDelegate, CAAnimationDelegate, UIApplicationDelegate, ArticleAPNsManagerDelegate, TTGetTopNaviControllerProtocol>
    {
        BOOL _initialized;
        BOOL _animationFinished;
        float _previousWindowLevel;
        int _splashADShowType;
        BOOL _hasTriedUploadLocation;
        NSMutableDictionary *_remotoNotificationDict;
        BOOL _adShow;
        UIWindow *_window;
        NSString *deviceTokenString;
        NSString *_detailCommentLabelTextWhenCrash;
        TTNavigationController *_navigationController;
        UIWindow *_nightModelWindow;
        SSSplashView *_splashView;
        NSDictionary *_launchOptions;
        UIWindow *_architectureWindow;
    }
    
+ (void)startRegisterRemoteNotification;
+ (void)startRegisterRemoteNotificationAfterAuthorizeWithDelay:(int)arg1;
+ (void)startRegisterRemoteNotificationAfterDelay:(int)arg1;
+ (void)startRegisterRemoteNotificationWithGuideConfigInfoAfterDelay:(int)arg1;
+ (void)startReportLocationWithGuideConfigInfo;
- (void)UIInitialized:(id)arg1;
- (void)accountStateDidChanged:(id)arg1;
    @property(nonatomic) BOOL adShow; // @synthesize adShow=_adShow;
- (void)addFeedbackLaunchCheck;
- (void)addSplashView;
- (id)allSupportedURLSchemes;
- (BOOL)apnsManager:(id)arg1 canPresentViewControllerToUserID:(id)arg2;
- (void)apnsManager:(id)arg1 handleUserInfoContainsID:(id)arg2;
- (id)appKey;
//- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
//- (void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (BOOL)application:(id)arg1 normalLauchProcessWithOptions:(id)arg2;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
//- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned int)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)application:(id)arg1 willChangeStatusBarFrame:(struct CGRect)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
    @property(retain, nonatomic) UIWindow *architectureWindow; // @synthesize architectureWindow=_architectureWindow;
- (void)autoLoginFinished:(id)arg1;
- (void)beginRegisterSystemAuthorization;
- (BOOL)canHandleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (id)channelId;
- (void)checkWeiboExpiration;
- (void)cleanCoreDataIfNeeded;
- (void)clearAppBadgeButNotificationCenter;
//- (void)crashlyticsDidDetectReportForLastExecution:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
    @property(retain, nonatomic) NSString *detailCommentLabelTextWhenCrash; // @synthesize detailCommentLabelTextWhenCrash=_detailCommentLabelTextWhenCrash;
    @property(copy, nonatomic) NSString *deviceTokenString; // @synthesize deviceTokenString;
- (id)exploreMainViewController;
- (id)getAppTopNavigationController;
- (void)handleFirstLaunchForCurrentVersion;
- (void)handleLaunchURLForTTTracker:(id)arg1;
- (void)handleShortcutItem:(id)arg1;
- (void)initialize:(id)arg1;
- (void)initializeSDKS;
- (void)introductionViewControllerDismissed:(id)arg1;
- (BOOL)isFromAPNS;
- (BOOL)isFromAppLink;
    @property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
    @property(retain, nonatomic) TTNavigationController *navigationController; // @synthesize navigationController=_navigationController;
    @property(retain, nonatomic) UIWindow *nightModelWindow; // @synthesize nightModelWindow=_nightModelWindow;
- (void)openTTNetworkHttpsTransformation;
- (void)p_sendShowWidgetTrackIfNeed;
- (void)registerDefaultsFromSettingsBundle;
- (void)removeSplash;
- (void)reportAppEnterBackground;
- (void)sendLaunchTrackIfNeededWithUrl:(id)arg1;
- (void)setLaunchController;
- (void)setPadLaunchViewControler;
- (void)setPhoneLaunchViewController;
- (void)setRootTabPadArchitecture;
- (void)setRootViewControllerWithStoryboardName:(id)arg1;
    @property(retain, nonatomic) SSSplashView *splashView; // @synthesize splashView=_splashView;
    @property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)settingMonitor;
- (void)settingNetworkSerializerClass;
- (void)settingSplashADShowType:(BOOL)arg1;
- (void)shareToPlatformNeedEnterBackground:(id)arg1;
- (void)showADSplash;
- (void)showIntroductionView;
- (void)showRemoteNotificationAlertIfNeeded;
- (void)splashViewAnimationFinished:(id)arg1;
- (void)splashViewDisappearAnimationDidFinished:(unsigned int)arg1;
- (void)startUpdateLocationAfterDelay:(int)arg1;
- (id)umengTrackAppkey;
- (void)userInfoReceived:(id)arg1;
- (id)weixinAppID;

    
@end

@interface AppDelegate : NewsBaseDelegate
    {
    }
    
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)umengTrackAppkey;
- (id)weixinAppID;
    
@end


@interface APNsManager : NSObject
    {
        SSHttpOperation *_appNoticeOperation;
    }
    
+ (id)sharedManager;
    @property(retain, nonatomic) SSHttpOperation *appNoticeOperation; // @synthesize appNoticeOperation=_appNoticeOperation;
- (void)dealWithOpenURL:(id *)arg1;
- (void)dealloc;
- (void)handleRemoteNotification:(id)arg1;
- (void)sendAppNoticeStatus;
- (void)sendTrackEvent:(id)arg1 lable:(id)arg2 value:(id)arg3;
- (void)trackWithPageName:(id)arg1 params:(id)arg2;
- (BOOL)tryForOldAPNsLogical:(id)arg1;
- (BOOL)ttv_successDownloadPic:(id)arg1;
    
@end


@interface ArticleAPNsManager : APNsManager
    {
        id <ArticleAPNsManagerDelegate> _delegate;
    }
    
+ (id)sharedManager;
- (void)dealWithOpenURL:(id *)arg1;
    @property(nonatomic) __weak id <ArticleAPNsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)trackWithPageName:(id)arg1 params:(id)arg2;
- (BOOL)tryForOldAPNsLogical:(id)arg1;
    
    @end


@interface TTNavigationController : UINavigationController <UIGestureRecognizerDelegate>
    {
        BOOL _shouldIgnorePushingViewControllers;
        BOOL _canDragBack;
        BOOL _fullScreenVideoIsPlaying;
        BOOL _animationLock;
        BOOL _useTimingFunction;
        BOOL _viewDidLoadDone;
        UIPanGestureRecognizer *_panRecognizer;
        UISwipeGestureRecognizer *_swipeRecognizer;
        UIView *_insertView;
        UIImageView *_shadowImage;
        UIView *_maskView;
        UIColor *_originalColor;
    }
    
+ (BOOL)refactorNaviEnabled;
+ (BOOL)refactorTransitionAnimationEnabled;
- (void)addCustomNavigationBarForViewController:(id)arg1;
- (void)addCustomNavigationBarIfNeeded;
- (void)addKVO;
- (void)addTabBarSnapshotForSuperView:(id)arg1;
- (struct UIEdgeInsets)additionalSafeAreaInsets;
    @property(nonatomic) BOOL animationLock; // @synthesize animationLock=_animationLock;
    @property(nonatomic) BOOL canDragBack; // @synthesize canDragBack=_canDragBack;
- (void)customPopToViewController:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3;
- (void)dealloc;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
    @property(nonatomic) BOOL fullScreenVideoIsPlaying; // @synthesize fullScreenVideoIsPlaying=_fullScreenVideoIsPlaying;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureView:(id)arg1 isClass:(Class)arg2;
- (void)ignorePushViewControllersIfNeeded:(BOOL)arg1;
- (id)initWithRootViewController:(id)arg1;
- (id)innerBarBackgroundView;
- (id)innerBarItemViews;
- (id)innerTransitionView;
    @property(retain, nonatomic) UIView *insertView; // @synthesize insertView=_insertView;
    @property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (BOOL)orientationMaskSupportsOrientationMask:(unsigned int)arg1 orientation:(int)arg2;
    @property(retain, nonatomic) UIColor *originalColor; // @synthesize originalColor=_originalColor;
- (void)pan:(id)arg1;
    @property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
//- (void)performAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (id)popViewControllerByInterfaceAnimationAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animationTag:(int)arg2 direction:(int)arg3 animated:(BOOL)arg4;
- (void)pushViewControllerByInterfaceAnimation:(id)arg1 animated:(BOOL)arg2;
- (void)reloadTheme;
- (void)removeKVO;
- (void)removeTabBarSnapshotForSuperView:(id)arg1;
- (void)removeViewControllerAtIndex:(unsigned int)arg1;
- (void)setCustomNavigationBarForViewControllers:(id)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setScrollViewContentInset:(id)arg1 viewController:(id)arg2;
    @property(retain, nonatomic) UIImageView *shadowImage; // @synthesize shadowImage=_shadowImage;
    @property(nonatomic) BOOL shouldIgnorePushingViewControllers; // @synthesize shouldIgnorePushingViewControllers=_shouldIgnorePushingViewControllers;
    @property(retain, nonatomic) UISwipeGestureRecognizer *swipeRecognizer; // @synthesize swipeRecognizer=_swipeRecognizer;
    @property(nonatomic) BOOL useTimingFunction; // @synthesize useTimingFunction=_useTimingFunction;
- (void)setViewControllers:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
    @property(nonatomic) BOOL viewDidLoadDone; // @synthesize viewDidLoadDone=_viewDidLoadDone;
- (BOOL)shouldAutorotate;
- (id)snapShotForTabbar;
- (id)snapshotViewFromView:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)swipe:(id)arg1;
- (int)topViewControllerIndexWithNoneDragToRoot;
- (void)transitionAtPercent:(float)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(BOOL)arg1;
    
@end



@interface TTFQuizShowLiveRoomNetworkManager : NSObject
{
}

+ (void)quizShowGetStreamOfGroupID:(long long)arg1 withCompletion:(id)arg2;
+ (id)quizShowLiveRoomIndexRequestOfActivityID:(long long)arg1 withCompletion:(id)arg2;
+ (void)quizShowLiveRoomInitRequestOfActivityID:(long long)arg1 withCompletion:(id)arg2;
+ (void)quizShowLiveRoomLeaveRequestOfActivityID:(long long)arg1 question:(id)arg2 completion:(id)arg3;
+ (void)quizShowWinRequestOfActivityID:(long long)arg1 withCompletion:(id)arg2;
+ (void)recoverLifesOfActivityID:(long long)arg1 question:(id)arg2;
+ (id)requestHeartbeatOfActivityID:(long long)arg1 completion:(id)arg2;
+ (void)signUpOfActivityID:(long long)arg1 completion:(id)arg2;
+ (void)submitAnwserOfActivityID:(long long)arg1 questionID:(long long)arg2 optionIDs:(id)arg3 completion:(id)arg4;

@end

@class LOTAnimationView, NSString, TTFDashboardView, TTFInputInvitationCodeView, TTFQuizShowLiveRoomViewController, TTFQuizShowLiveRoomViewModel, TTFResurrectionView, UIButton, UIImageView, UILabel, UIView;

@interface TTFDashboardViewController : TTFBaseViewController <TTFQuizShowLiveRoomViewControllerProtocol>
{
    BOOL _hasAutoEnterLiveRoom;
    BOOL _hasReceiveLiveRoomIndexSuccess;
    BOOL _hasTrackEnterEvent;
    BOOL _originalHideStatusBar;
    NSString *_enterFromStr;
    TTFQuizShowLiveRoomViewController *_curQuizShowLiveRoomVC;
    UIImageView *_bannerImageView;
    UIImageView *_backgroundStarImageView;
    UIImageView *_backgroundCoinsImageView;
    UIButton *_avatarButton;
    UIButton *_closeButton;
    UIView *_dashboardContainerView;
    TTFDashboardView *_dashboardView;
    TTFResurrectionView *_resurrectionView;
    TTFInputInvitationCodeView *_inputInvitationCodeView;
    UIButton *_retryButton;
    UIButton *_enterAgainButton;
    UILabel *_enterAgainTextLabel;
    LOTAnimationView *_enterAgainAnimationView;
    TTFQuizShowLiveRoomViewModel *_liveRoomViewModel;
    int _originalStatusBarStyle;
    double _liveTimeInterval;
    double _watchTimeInterval;
    long long _wrongItemNum;
    long long _activityID;
    long long _jumpMinTime;
}

@property(nonatomic) long long activityID; // @synthesize activityID=_activityID;
@property(retain, nonatomic) UIButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(retain, nonatomic) UIImageView *backgroundCoinsImageView; // @synthesize backgroundCoinsImageView=_backgroundCoinsImageView;
@property(retain, nonatomic) UIImageView *backgroundStarImageView; // @synthesize backgroundStarImageView=_backgroundStarImageView;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
- (void)clickAvatarButton:(id)arg1;
- (void)clickHelp:(id)arg1;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)closeDashboard:(id)arg1;
@property(nonatomic) __weak TTFQuizShowLiveRoomViewController *curQuizShowLiveRoomVC; // @synthesize curQuizShowLiveRoomVC=_curQuizShowLiveRoomVC;
@property(retain, nonatomic) UIView *dashboardContainerView; // @synthesize dashboardContainerView=_dashboardContainerView;
@property(retain, nonatomic) TTFDashboardView *dashboardView; // @synthesize dashboardView=_dashboardView;
- (void)dealloc;
- (void)endTrackStayPageWithParams:(id)arg1;
@property(retain, nonatomic) LOTAnimationView *enterAgainAnimationView; // @synthesize enterAgainAnimationView=_enterAgainAnimationView;
@property(retain, nonatomic) UIButton *enterAgainButton; // @synthesize enterAgainButton=_enterAgainButton;
- (void)enterAgainButtonDidClicked:(id)arg1;
@property(retain, nonatomic) UILabel *enterAgainTextLabel; // @synthesize enterAgainTextLabel=_enterAgainTextLabel;
@property(copy, nonatomic) NSString *enterFromStr; // @synthesize enterFromStr=_enterFromStr;
- (void)enterQuizShowLiveRoomImmediatelyEnterAfterIndex:(BOOL)arg1 enterAgain:(BOOL)arg2;
- (void)enterTopListViewController;
@property(nonatomic) BOOL hasAutoEnterLiveRoom; // @synthesize hasAutoEnterLiveRoom=_hasAutoEnterLiveRoom;
@property(nonatomic) BOOL hasReceiveLiveRoomIndexSuccess; // @synthesize hasReceiveLiveRoomIndexSuccess=_hasReceiveLiveRoomIndexSuccess;
@property(nonatomic) BOOL hasTrackEnterEvent; // @synthesize hasTrackEnterEvent=_hasTrackEnterEvent;
- (id)initWithActivityID:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)inputInvitationCode:(id)arg1;
@property(retain, nonatomic) TTFInputInvitationCodeView *inputInvitationCodeView; // @synthesize inputInvitationCodeView=_inputInvitationCodeView;
@property(nonatomic) long long jumpMinTime; // @synthesize jumpMinTime=_jumpMinTime;
@property(retain, nonatomic) TTFQuizShowLiveRoomViewModel *liveRoomViewModel; // @synthesize liveRoomViewModel=_liveRoomViewModel;
@property(nonatomic) double liveTimeInterval; // @synthesize liveTimeInterval=_liveTimeInterval;
- (id)oppoDict;
@property(nonatomic) BOOL originalHideStatusBar; // @synthesize originalHideStatusBar=_originalHideStatusBar;
@property(nonatomic) int originalStatusBarStyle; // @synthesize originalStatusBarStyle=_originalStatusBarStyle;
- (void)quizShowLiveRoomClose:(id)arg1;
- (void)resurrection:(id)arg1;
@property(retain, nonatomic) TTFResurrectionView *resurrectionView; // @synthesize resurrectionView=_resurrectionView;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
- (void)retryButtonDidClicked:(id)arg1;
- (void)setStaylBeginTime:(id)arg1;
@property(nonatomic) double watchTimeInterval; // @synthesize watchTimeInterval=_watchTimeInterval;
@property(nonatomic) long long wrongItemNum; // @synthesize wrongItemNum=_wrongItemNum;
- (void)shareToFriend:(id)arg1;
- (void)signUp:(id)arg1;
- (void)startTrackStayPage;
- (id)stayBeginTime;
- (void)ttf_accountStatusChangeNotification:(id)arg1;
- (void)ttf_applicationDidEnterBackground:(id)arg1;
- (void)ttf_applicationWillEnterForeground:(id)arg1;
- (id)ttf_createInterpolatingMotionEffectWithRelativeValue:(float)arg1 type:(int)arg2;
- (void)ttf_endTrackStayPage:(BOOL)arg1;
- (void)ttf_enterLoginTipsFlow;
- (void)ttf_enterOpenNotificationTipsFlow;
- (void)ttf_judgeNeedShowEnterAgain;
- (void)ttf_openAppStore;
- (void)ttf_preloadShareImage0;
- (void)ttf_preloadShareImage1;
- (void)ttf_refreshBannerImageWithImageURLstr:(id)arg1;
- (void)ttf_registerNotification;
- (void)ttf_removeNotification;
- (void)ttf_requestIndex;
- (void)ttf_setupConstraint;
- (void)ttf_setupViews;
- (void)ttf_triggerEnterTracker:(BOOL)arg1;
- (void)ttf_triggerLivingEndFlow;
- (void)ttf_unobserveLiveRoomViewModel;
- (void)ttf_updateInviteCodeInfo;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;


@end


@class CADisplayLink, NSArray, TTFAnswerStruct, TTFAnswerTrace, TTFHeartBeatTrace, TTFQuestionStruct, TTFQuestionTrace, TTFQuizShowLiveRoomViewModel;

/// 2.2.9
/// 与回答问题相关的model类
@interface TTFQuestionAnswerUnit : NSObject
{
    BOOL _userNeedAnswer;
    BOOL _isUserAnswerCorrect;
    id <TTFQuestionAnswerUnitDelegate> _delegate;
    TTFQuizShowLiveRoomViewModel *_viewModel;
    unsigned int _status;
    TTFQuestionStruct *_question;
    TTFAnswerStruct *_answer;
    float _remainingAnswerTime;
    NSArray *_userChoosenOptions;
    TTFAnswerTrace *_answerTrace;
    TTFHeartBeatTrace *_heartbeatTrace;
    /// 2.2.9添加
    /// 缓冲区剩余回答时间
    float _bufferRemainingAnswerTime;
    float _endTime;
    CADisplayLink *_countdownDisplayLink;
    int _retryCount;
    int _retryTimeout;
    int _retryIndex;
    TTFQuestionTrace *_questionTrace;
}

- (void)_submitAnswerToServerWithOptions:(id)arg1;
@property(retain, nonatomic) TTFAnswerStruct *answer; // @synthesize answer=_answer;
- (void)answerTimeUp;
@property(retain, nonatomic) TTFAnswerTrace *answerTrace; // @synthesize answerTrace=_answerTrace;
- (void)beginAnswerCountdown;
@property(nonatomic) float bufferRemainingAnswerTime; // @synthesize bufferRemainingAnswerTime=_bufferRemainingAnswerTime;
- (BOOL)canAnswer;
@property(retain, nonatomic) CADisplayLink *countdownDisplayLink; // @synthesize countdownDisplayLink=_countdownDisplayLink;
- (void)dealloc;
@property(nonatomic) __weak id <TTFQuestionAnswerUnitDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) TTFHeartBeatTrace *heartbeatTrace; // @synthesize heartbeatTrace=_heartbeatTrace;
- (id)init;
- (id)initWithHeartbeatTrace:(id)arg1 currentTime:(long long)arg2 viewModel:(id)arg3;
@property(nonatomic) BOOL isUserAnswerCorrect; // @synthesize isUserAnswerCorrect=_isUserAnswerCorrect;
- (BOOL)isUserNeedAnswer;
- (float)passTimeRate;
@property(retain, nonatomic) TTFQuestionStruct *question; // @synthesize question=_question;
@property(retain, nonatomic) TTFQuestionTrace *questionTrace; // @synthesize questionTrace=_questionTrace;
@property(nonatomic) float remainingAnswerTime; // @synthesize remainingAnswerTime=_remainingAnswerTime;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) int retryIndex; // @synthesize retryIndex=_retryIndex;
@property(nonatomic) int retryTimeout; // @synthesize retryTimeout=_retryTimeout;
- (void)revealAnswer:(id)arg1;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
- (void)setUserChoosen:(id)arg1;
@property(copy, nonatomic) NSArray *userChoosenOptions; // @synthesize userChoosenOptions=_userChoosenOptions;
@property(nonatomic) BOOL userNeedAnswer; // @synthesize userNeedAnswer=_userNeedAnswer;
@property(nonatomic) __weak TTFQuizShowLiveRoomViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)submitAnswerWithOptions:(id)arg1;
- (unsigned int)userAnswerResult;

@end

@interface TTFAnswerTrace : NSObject
{
    BOOL _wsHt;
    BOOL _isRight;
    BOOL _useLife;
    int _status;
    int _auth;
    NSString *_extra;
    long long _aid;
    long long _qid;
    long long _optionId;
    long long _rt;
    long long _ht;
    long long _startT;
    long long _localOid;
    long long _showT;
    long long _leftT;
}

@property(nonatomic) long long aid; // @synthesize aid=_aid;
@property(nonatomic) int auth; // @synthesize auth=_auth;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(nonatomic) long long ht; // @synthesize ht=_ht;
- (id)initWithHeartBeatTrace:(id)arg1;
@property(nonatomic) BOOL isRight; // @synthesize isRight=_isRight;
@property(nonatomic) long long leftT; // @synthesize leftT=_leftT;
@property(nonatomic) long long localOid; // @synthesize localOid=_localOid;
// 答案选项id
@property(nonatomic) long long optionId; // @synthesize optionId=_optionId;
@property(nonatomic) long long qid; // @synthesize qid=_qid;
@property(nonatomic) long long rt; // @synthesize rt=_rt;
@property(nonatomic) long long showT; // @synthesize showT=_showT;
@property(nonatomic) long long startT; // @synthesize startT=_startT;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) BOOL useLife; // @synthesize useLife=_useLife;
@property(nonatomic) BOOL wsHt; // @synthesize wsHt=_wsHt;
- (id)traceDict;

@end

@protocol TTFDashboardViewWrapperDelegate <NSObject>
- (void)clickAvatarButton:(id)arg1;
- (void)clickHelp:(id)arg1;
- (void)closeDashboard:(id)arg1;
- (void)enterAgainButtonDidClicked;
- (void)enterTopListViewController;
- (void)inputInvitationCode:(id)arg1;
- (void)resurrection:(id)arg1;
- (void)shareToFriend:(id)arg1;
- (void)signUp:(id)arg1;
@end


@class LOTAnimationView, TTFDashboardView, TTFResurrectionView, UIButton, UIImageView, UILabel;

/// 进入直播Button的父视图
@interface TTFDashboardViewWrapper : UIView
{
    NSObject<TTFDashboardViewWrapperDelegate> *_delegate;
    UIImageView *_bannerImageView;
    UIButton *_avatarButton;
    UIButton *_closeButton;
    UIView *_dashboardContainerView;
    TTFDashboardView *_dashboardView;
    TTFResurrectionView *_resurrectionView;
    UIButton *_enterAgainButton;
    UILabel *_enterAgainTextLabel;
    LOTAnimationView *_enterAgainAnimationView;
}

@property(retain, nonatomic) UIButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
- (void)clickAvatarButton:(id)arg1;
- (void)clickHelp:(id)arg1;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)closeDashboard:(id)arg1;
@property(retain, nonatomic) UIView *dashboardContainerView; // @synthesize dashboardContainerView=_dashboardContainerView;
- (void)dashboardContainerViewHidden:(BOOL)arg1;
@property(retain, nonatomic) TTFDashboardView *dashboardView; // @synthesize dashboardView=_dashboardView;
- (void)dealloc;
@property(nonatomic) __weak NSObject<TTFDashboardViewWrapperDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)enterAgainAnimationChangeIsPlay:(BOOL)arg1;
@property(retain, nonatomic) LOTAnimationView *enterAgainAnimationView; // @synthesize enterAgainAnimationView=_enterAgainAnimationView;
@property(retain, nonatomic) UIButton *enterAgainButton; // @synthesize enterAgainButton=_enterAgainButton;
/// 点击进入直播按钮enterAgainButton调用
- (void)enterAgainButtonDidClicked:(id)arg1;
@property(retain, nonatomic) UILabel *enterAgainTextLabel; // @synthesize enterAgainTextLabel=_enterAgainTextLabel;
- (void)enterTopListViewController;
- (void)getAvatarButtonImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)inputInvitationCode:(id)arg1;
- (void)resurrection:(id)arg1;
@property(retain, nonatomic) TTFResurrectionView *resurrectionView; // @synthesize resurrectionView=_resurrectionView;
- (void)shareToFriend:(id)arg1;
- (void)signUp:(id)arg1;
- (void)ttf_applicationDidEnterBackground:(id)arg1;
- (void)ttf_applicationWillEnterForeground:(id)arg1;
- (void)ttf_setupConstraint;

@end

//@interface TTFQuestionStruct : GPBMessage
//{
//}
//
//+ (id)descriptor;
//
//// Remaining properties
//@property(nonatomic) long long activityId; // @dynamic activityId;
//@property(nonatomic) long long commitDelay; // @dynamic commitDelay;
//@property(retain, nonatomic) NSMutableArray *imageURLArray; // @dynamic imageURLArray;
//@property(readonly, nonatomic) unsigned int imageURLArray_Count; // @dynamic imageURLArray_Count;
//@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
//@property(readonly, nonatomic) unsigned int optionsArray_Count; // @dynamic optionsArray_Count;
//@property(nonatomic) long long questionId; // @dynamic questionId;
//@property(nonatomic) long long questionStartTsMs; // @dynamic questionStartTsMs;
//@property(copy, nonatomic) NSString *text; // @dynamic text;
//@property(nonatomic) long long timeLimit; // @dynamic timeLimit;
//@property(nonatomic) long long uuQuestionId; // @dynamic uuQuestionId;
//@property(retain, nonatomic) NSMutableArray *videoURLArray; // @dynamic videoURLArray;
//@property(readonly, nonatomic) unsigned int videoURLArray_Count; // @dynamic videoURLArray_Count;
//
//@end

//@interface TTFAnswerStruct : GPBMessage
//{
//}
//
//+ (id)descriptor;
//
//// Remaining properties
//@property(nonatomic) long long activityId; // @dynamic activityId;
//@property(nonatomic) long long answerStartTsMs; // @dynamic answerStartTsMs;
//@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
//@property(readonly, nonatomic) unsigned int optionsArray_Count; // @dynamic optionsArray_Count;
//@property(nonatomic) long long questionId; // @dynamic questionId;
//@property(nonatomic) long long useLifeUsers; // @dynamic useLifeUsers;
//@property(nonatomic) long long uuQuestionId; // @dynamic uuQuestionId;
//
//@end

//@interface TTFOptionStruct : GPBMessage
//{
//}
//
//+ (id)descriptor;
//
//// Remaining properties
//@property(nonatomic) long long choosenUsers; // @dynamic choosenUsers;
//@property(retain, nonatomic) NSMutableArray *imageURLArray; // @dynamic imageURLArray;
//@property(readonly, nonatomic) unsigned int imageURLArray_Count; // @dynamic imageURLArray_Count;
//@property(nonatomic) long long optionId; // @dynamic optionId;
//@property(nonatomic) BOOL right; // @dynamic right;
//@property(copy, nonatomic) NSString *text; // @dynamic text;
//@property(retain, nonatomic) NSMutableArray *videoURLArray; // @dynamic videoURLArray;
//@property(readonly, nonatomic) unsigned int videoURLArray_Count; // @dynamic videoURLArray_Count;



////////////////////////////////////////////////////////////////////////
#pragma mark - net work
////////////////////////////////////////////////////////////////////////

@interface TTFShareNetworkManager : NSObject
{
}

+ (void)requestInviteCodeWithAppID:(int)arg1 deviceID:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestShareTypeWithDiveceID:(long long)arg1 appID:(int)arg2 completion:(CDUnknownBlockType)arg3;

@end



/// url
@interface TTFURLSetting : NSObject
{
}

+ (id)ansWinURL;
+ (id)checkInvicationCodeURL;
+ (id)commentBrowURL;
+ (id)commentPostURL;
+ (id)domainForType:(int)arg1;
+ (id)frontierURL;
+ (id)heartbeatURLWithActivityID:(long long)arg1;
+ (id)indexInfoURL;
+ (id)indexURL;
+ (id)inviteCodeURL;
+ (id)logURL;
+ (id)playURLsURLWithGroupID:(long long)arg1;
+ (id)quizShowInitURL;
+ (id)quizShowLeaveURL;
+ (id)rankURL;
+ (id)recoverURL;
+ (id)resurrectPageURL;
+ (id)settingsURL;
+ (id)shareAddLifeURL;
+ (id)shareToFriendsBaseURL;
+ (id)shareTypeURL;
+ (id)signUpURL;
+ (id)submitAnwserURL;
+ (id)userGuideURL;
+ (id)walletPageURL;

@end


@class NSDictionary, NSString, TTHttpRequest, TTRequestModel;

@protocol TTMultipartFormData <NSObject>
- (void)appendPartWithFileData:(NSData *)arg1 name:(NSString *)arg2 fileName:(NSString *)arg3 mimeType:(NSString *)arg4;
- (void)appendPartWithFormData:(NSData *)arg1 name:(NSString *)arg2;
@end


@class AFHTTPRequestSerializer, NSString;
@interface TTHttpMultipartFormData : NSObject <TTMultipartFormData>
{
}

@end

@protocol TTHTTPRequestSerializerProtocol <NSObject>
+ (NSObject<TTHTTPRequestSerializerProtocol> *)serializer;
- (TTHttpRequest *)URLRequestWithRequestModel:(TTRequestModel *)arg1 commonParams:(NSDictionary *)arg2;
- (TTHttpRequest *)URLRequestWithURL:(NSString *)arg1 headerField:(NSDictionary *)arg2 params:(NSDictionary *)arg3 method:(NSString *)arg4 constructingBodyBlock:(void (^)(id <TTMultipartFormData>))arg5 commonParams:(NSDictionary *)arg6;
- (TTHttpRequest *)URLRequestWithURL:(NSString *)arg1 params:(id)arg2 method:(NSString *)arg3 constructingBodyBlock:(void (^)(id <TTMultipartFormData>))arg4 commonParams:(NSDictionary *)arg5;
- (NSString *)userAgentString;
@end



@interface TTHTTPRequestSerializerBaseAFNetworking : NSObject <TTHTTPRequestSerializerProtocol>
{
    NSString *_defaultUserAgentString;
    AFHTTPRequestSerializer *_realAFHTTPRequestSerializer;
}

+ (id)serializer;
- (id)URLRequestWithRequestModel:(id)arg1 commonParams:(id)arg2;
- (id)URLRequestWithURL:(id)arg1 headerField:(id)arg2 params:(id)arg3 method:(id)arg4 constructingBodyBlock:(id)arg5 commonParams:(id)arg6;
- (id)URLRequestWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 constructingBodyBlock:(id)arg4 commonParams:(id)arg5;
- (void)_buildRequestHeaders:(id)arg1;
@property(copy, nonatomic) NSString *defaultUserAgentString; // @synthesize defaultUserAgentString=_defaultUserAgentString;
- (id)init;
@property(retain, nonatomic) AFHTTPRequestSerializer *realAFHTTPRequestSerializer; // @synthesize realAFHTTPRequestSerializer=_realAFHTTPRequestSerializer;
- (id)userAgentString;

@end



@interface TTHTTPRequestSerializerBase : NSObject <TTHTTPRequestSerializerProtocol>
{
    NSObject<TTHTTPRequestSerializerProtocol> *_currentImpl;
}

+ (id)hashRequest:(id)arg1 body:(id)arg2;
+ (id)serializer;
- (id)URLRequestWithRequestModel:(id)arg1 commonParams:(id)arg2;
- (id)URLRequestWithURL:(id)arg1 headerField:(id)arg2 params:(id)arg3 method:(id)arg4 constructingBodyBlock:(id)arg5 commonParams:(id)arg6;
- (id)URLRequestWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 constructingBodyBlock:(id)arg4 commonParams:(id)arg5;
@property(retain, nonatomic) NSObject<TTHTTPRequestSerializerProtocol> *currentImpl; // @synthesize currentImpl=_currentImpl;
- (id)init;
- (id)userAgentString;

@end


@interface TTFHTTPRequestSerializer : TTHTTPRequestSerializerBase
{
    NSString *_defaultUserAgent;
}

+ (id)serializer;
- (id)URLRequestWithRequestModel:(id)arg1 commonParams:(id)arg2;
- (id)URLRequestWithURL:(id)arg1 headerField:(id)arg2 params:(id)arg3 method:(id)arg4 constructingBodyBlock:(id)arg5 commonParams:(id)arg6;
- (id)URLRequestWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 constructingBodyBlock:(id)arg4 commonParams:(id)arg5;
- (id)_transferedURL:(id)arg1;
- (void)applyCookieHeader:(id)arg1;
- (void)applyCookieHeaderFrom:(id)arg1 toRequest:(id)arg2;
- (void)buildRequestHeaders:(id)arg1;
- (void)buildRequestHeaders:(id)arg1 parameters:(id)arg2;
@property(copy, nonatomic) NSString *defaultUserAgent; // @synthesize defaultUserAgent=_defaultUserAgent;
- (id)defaultUserAgentString;

@end



@interface TTFBinaryHTTPRequestSerializer : TTFHTTPRequestSerializer
{
}

+ (void)configTimeout:(double)arg1;
- (id)URLRequestWithURL:(id)idarg1 headerField:(id)arg2 params:(id)arg3 method:(id)arg4 constructingBodyBlock:(id)arg5 commonParams:(id)arg6;
- (id)URLRequestWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 constructingBodyBlock:(id)arg4 commonParams:(id)arg5;

@end

@interface TTNetworkManager : NSObject
{
    BOOL _pureChannelForJSONResponseSerializer;
    BOOL _isEncryptQuery;
    BOOL _isEncryptQueryInHeader;
    BOOL _isKeepPlainQuery;
    Class _defaultJSONResponseSerializerClass;
    Class _defaultResponseModelResponseSerializerClass;
    Class _defaultBinaryResponseSerializerClass;
    Class _defaultRequestSerializerClass;
    Class _defaultResponseRreprocessorClass;
    NSDictionary *_commonParams;
    CDUnknownBlockType _commonParamsblock;
    CDUnknownBlockType _urlTransformBlock;
    CDUnknownBlockType _urlHashBlock;
}

+ (id)GetCityName;
+ (CDUnknownBlockType)GetDomainBlock;
+ (CDUnknownBlockType)MonitorBlock;
+ (int)getLibraryImpl;
+ (BOOL)httpDnsEnabled;
+ (void)setCityName:(id)arg1;
+ (void)setGetDomainBlock:(CDUnknownBlockType)arg1;
+ (void)setHttpDnsEnabled:(BOOL)arg1;
+ (void)setLibraryImpl:(int)arg1;
+ (void)setMonitorBlock:(CDUnknownBlockType)arg1;
+ (id)shareInstance;
+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *commonParams; // @synthesize commonParams=_commonParams;
@property(copy, nonatomic) CDUnknownBlockType commonParamsblock; // @synthesize commonParamsblock=_commonParamsblock;
@property(retain, nonatomic) Class defaultBinaryResponseSerializerClass; // @synthesize defaultBinaryResponseSerializerClass=_defaultBinaryResponseSerializerClass;
@property(retain, nonatomic) Class defaultJSONResponseSerializerClass; // @synthesize defaultJSONResponseSerializerClass=_defaultJSONResponseSerializerClass;
@property(retain, nonatomic) Class defaultRequestSerializerClass; // @synthesize defaultRequestSerializerClass=_defaultRequestSerializerClass;
@property(retain, nonatomic) Class defaultResponseModelResponseSerializerClass; // @synthesize defaultResponseModelResponseSerializerClass=_defaultResponseModelResponseSerializerClass;
@property(retain, nonatomic) Class defaultResponseRreprocessorClass; // @synthesize defaultResponseRreprocessorClass=_defaultResponseRreprocessorClass;
@property(nonatomic) BOOL isEncryptQuery; // @synthesize isEncryptQuery=_isEncryptQuery;
@property(nonatomic) BOOL isEncryptQueryInHeader; // @synthesize isEncryptQueryInHeader=_isEncryptQueryInHeader;
@property(nonatomic) BOOL isKeepPlainQuery; // @synthesize isKeepPlainQuery=_isKeepPlainQuery;
@property(nonatomic) BOOL pureChannelForJSONResponseSerializer; // @synthesize pureChannelForJSONResponseSerializer=_pureChannelForJSONResponseSerializer;
@property(copy, nonatomic) CDUnknownBlockType urlHashBlock; // @synthesize urlHashBlock=_urlHashBlock;
@property(copy, nonatomic) CDUnknownBlockType urlTransformBlock; // @synthesize urlTransformBlock=_urlTransformBlock;
- (id)transferedURL:(id)arg1;

@end


@class TTNetworkHTTPClient;

@interface TTNetworkManagerAFNetworking : TTNetworkManager
{
    TTNetworkHTTPClient *_binaryClient;
    TTNetworkHTTPClient *_jsonModelClient;
}

+ (id)shareInstance;
@property(retain, nonatomic) TTNetworkHTTPClient *binaryClient; // @synthesize binaryClient=_binaryClient;
- (void)clearHttpCache;
- (void)creatAppInfo;
- (void)doCommand:(id)arg1;
- (void)doRouteSelection;
- (id)downloadTaskWithRequest:(id)arg1 parameters:(id)arg2 headerField:(id)arg3 needCommonParams:(BOOL)arg4 progress:(id *)arg5 destination:(id)arg6 autoResume:(BOOL)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (id)downloadTaskWithRequest:(id)arg1 parameters:(id)arg2 headerField:(id)arg3 needCommonParams:(BOOL)arg4 progress:(id *)arg5 destination:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)enableVerboseLog;
- (long long)getHttpDiskCacheSize;
- (id)init;
@property(retain, nonatomic) TTNetworkHTTPClient *jsonModelClient; // @synthesize jsonModelClient=_jsonModelClient;
- (id)needCommonParams:(BOOL)arg1;
- (id)pickCommonParams;
- (id)requestForBinaryWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(BOOL)arg4 callback:(CDUnknownBlockType)arg5;
- (id)requestForBinaryWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(BOOL)arg4 headerField:(id)arg5 enableHttpCache:(BOOL)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 progress:(id *)arg9 callback:(CDUnknownBlockType)arg10;
- (id)requestForBinaryWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(BOOL)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(BOOL)arg7 callback:(CDUnknownBlockType)arg8;
- (id)requestForBinaryWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(BOOL)arg4 callback:(CDUnknownBlockType)arg5;
/*
 终
 */
- (id)requestForBinaryWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(BOOL)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(BOOL)arg7 callback:(CDUnknownBlockType)arg8;
- (id)requestForJSONWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(BOOL)arg4 callback:(CDUnknownBlockType)arg5;
- (id)requestForJSONWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(BOOL)arg4 headerField:(id)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(BOOL)arg8 callback:(CDUnknownBlockType)arg9;
- (id)requestForJSONWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(BOOL)arg4 headerField:(id)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(BOOL)arg8 verifyRequest:(BOOL)arg9 isCustomizedCookie:(BOOL)arg10 callback:(CDUnknownBlockType)arg11;
- (id)requestForJSONWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(BOOL)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(BOOL)arg7 callback:(CDUnknownBlockType)arg8;
- (id)requestForJSONWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(BOOL)arg4 callback:(CDUnknownBlockType)arg5;
- (id)requestForJSONWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(BOOL)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(BOOL)arg7 callback:(CDUnknownBlockType)arg8;
- (id)requestModel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)requestModel:(id)arg1 requestSerializer:(Class)arg2 responseSerializer:(Class)arg3 autoResume:(BOOL)arg4 callback:(CDUnknownBlockType)arg5;
- (void)setPureChannelForJSONResponseSerializer:(BOOL)arg1;
- (id)synchronizedRequstForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCommonParams:(BOOL)arg5;
- (id)synchronizedRequstForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCommonParams:(BOOL)arg5 needEncrypt:(BOOL)arg6;
- (id)synchronizedRequstForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCommonParams:(BOOL)arg5 needResponse:(BOOL)arg6;
- (id)synchronizedRequstForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCommonParams:(BOOL)arg5 needResponse:(BOOL)arg6 needEncrypt:(BOOL)arg7;
- (id)synchronizedRequstForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCommonParams:(BOOL)arg5 needResponse:(BOOL)arg6 needEncrypt:(BOOL)arg7 needContentEncodingAfterEncrypt:(BOOL)arg8;
- (id)uploadWithResponse:(id)arg1 parameters:(id)arg2 headerField:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 progress:(id *)arg5 needcommonParams:(BOOL)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 autoResume:(BOOL)arg9 callback:(CDUnknownBlockType)arg10;
- (id)uploadWithResponse:(id)arg1 parameters:(id)arg2 headerField:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 progress:(id *)arg5 needcommonParams:(BOOL)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 autoResume:(BOOL)arg9 callback:(CDUnknownBlockType)arg10 timeout:(double)arg11;
- (id)uploadWithURL:(id)arg1 headerField:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 progress:(id *)arg5 needcommonParams:(BOOL)arg6 callback:(CDUnknownBlockType)arg7;
- (id)uploadWithURL:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(CDUnknownBlockType)arg3 progress:(id *)arg4 needcommonParams:(BOOL)arg5 callback:(CDUnknownBlockType)arg6;
- (id)uploadWithURL:(id)arg1 parameters:(id)arg2 headerField:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 progress:(id *)arg5 needcommonParams:(BOOL)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 autoResume:(BOOL)arg9 callback:(CDUnknownBlockType)arg10;

@end

@interface TTBaseRequestParam : NSObject
{
    NSString *_aId;
    NSString *_deviceId;
    NSString *_installId;
    NSString *_appName;
    NSString *_host;
}

+ (id)requestParam;
@property(copy, nonatomic) NSString *aId; // @synthesize aId=_aId;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (id)init;
@property(copy, nonatomic) NSString *installId; // @synthesize installId=_installId;

@end

@protocol TTFantasyLCSManagerDelegate <NSObject>

@optional
- (void)onPushManagerConnectionError:(NSString *)arg1 connectionState:(unsigned int)arg2 url:(NSString *)arg3;
- (void)onPushManagerConnectionStateChanged:(unsigned int)arg1 url:(NSString *)arg2;
- (void)onReceivedUnknownPushMessageWithPayload:(NSString *)arg1;
@end


@interface TTFantasyLCSManager : NSObject
{
    id <TTFantasyLCSManagerDelegate> _delegate;
    NSString *_appKey;
    NSString *_fpID;
    NSString *_deviceID;
    NSString *_appID;
    NSString *_installID;
    NSString *_sessionID;
    NSArray *_wsURLs;
}

+ (id)sharedManager;
- (void)addObservers;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void)configLCSWithMessageReceiver:(id)arg1 appKey:(id)arg2 fpID:(id)arg3 deviceID:(id)arg4 appID:(id)arg5 installID:(id)arg6 sessionID:(id)arg7 wsURLs:(id)arg8;
- (int)currentNetworkStatus;
- (int)currentPlatform;
- (void)dealloc;
@property __weak id <TTFantasyLCSManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *fpID; // @synthesize fpID=_fpID;
- (int)getClientVersionNumber;
- (void)handleNetworkChange:(int)arg1;
@property(copy, nonatomic) NSString *installID; // @synthesize installID=_installID;
- (BOOL)isConnected;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)onPushManagerConnectionError:(id)arg1;
- (void)onPushManagerConnectionStateChanged:(id)arg1;
- (void)onPushManagerUnknownPushMessage:(id)arg1;
- (void)onReachabilityChangedNotification:(id)arg1;
- (void)removeObservers;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSArray *wsURLs; // @synthesize wsURLs=_wsURLs;
- (void)startConnection;
- (void)stopConnection;

@end

@protocol Singleton <NSObject>

@optional
+ (void)destorySharedInstance_tt;
+ (id)sharedInstance_tt;
@end



@interface TTHttpsControlManager : NSObject <Singleton>
{
    BOOL _shouldUseHTTPs;
    BOOL _shouldFallbackToHTTP;
    BOOL _shouldShowHijack;
    BOOL _shouldVerifySign;
    unsigned int _currentErrorCount;
    unsigned int _maxErrorCount;
    NSArray *_regularArray;
    unsigned int _httpRetryCount;
}

+ (id)httpsControlPersistence;
- (id)checkFeedStrictModeResponse_:(id)arg1 responseBody:(id *)arg2 responseError:(id *)arg3 forRequest:(id)arg4;
- (BOOL)checkHTTPsFailedWithURLResponse:(id)arg1 responseError:(id)arg2 trackInfoList:(id)arg3 forRequest:(id)arg4;
- (BOOL)checkIfHTTPNeedsRetryWithResponse:(id)arg1 responseBody:(id *)arg2 responseError:(id *)arg3 trackInfoList:(id)arg4 forRequest:(id)arg5;
- (void)configWithParameters:(id)arg1;
- (void)configWithResponseModel:(id)arg1;
@property unsigned int currentErrorCount; // @synthesize currentErrorCount=_currentErrorCount;
@property(nonatomic) unsigned int httpRetryCount; // @synthesize httpRetryCount=_httpRetryCount;
- (unsigned int)httpRetryCountWhenEtagCheckFailed;
- (id)init;
- (BOOL)isDisableShowHijack;
@property(nonatomic) unsigned int maxErrorCount; // @synthesize maxErrorCount=_maxErrorCount;
@property(copy) NSArray *regularArray; // @synthesize regularArray=_regularArray;
- (void)reportRSADecryptionFailedEvent_:(id)arg1;
@property(nonatomic) BOOL shouldFallbackToHTTP; // @synthesize shouldFallbackToHTTP=_shouldFallbackToHTTP;
@property(nonatomic) BOOL shouldShowHijack; // @synthesize shouldShowHijack=_shouldShowHijack;
@property(nonatomic) BOOL shouldUseHTTPs; // @synthesize shouldUseHTTPs=_shouldUseHTTPs;
@property(nonatomic) BOOL shouldVerifySign; // @synthesize shouldVerifySign=_shouldVerifySign;
- (id)transferedURLFrom:(id)arg1;
- (BOOL)urlIsMatched:(id)arg1;

@end


////////////////////////////////////////////////////////////////////////
#pragma mark - Util
////////////////////////////////////////////////////////////////////////
@interface TTInfoHelper : NSObject
{
}

+ (id)AppLaunchedTimesKey;
+ (id)MACAddress;
+ (float)OSVersionNumber;
+ (id)addressOfHost:(id)arg1;
+ (id)appDisplayName;
+ (int)appLaunchedTimes;
+ (id)appName;
+ (id)appOwnURL;
+ (id)bundleIdentifier;
+ (id)carrierMCC;
+ (id)carrierMNC;
+ (id)carrierName;
+ (id)connectMethodName;
+ (id)currentLanguage;
+ (id)deviceID;
+ (BOOL)disableBackupForPath:(id)arg1;
+ (id)getCurrentChannel;
+ (id)getIPAddresses;
+ (id)idfaString;
+ (id)idfvString;
+ (id)installID;
+ (BOOL)isAPPFirstLaunch;
+ (BOOL)isJailBroken;
+ (id)openUDID;
+ (void)resetAppLaunchedTimes;
+ (void)saveDeviceID:(id)arg1;
+ (void)saveInstallID:(id)arg1;
+ (void)setAppDidLaunchThisTime;
+ (void)setAppFirstLaunch;
+ (id)ssAppID;
+ (id)ssAppMID;
+ (id)ssAppScheme;
+ (id)versionName;
+ (id)videoApiVersion;

@end

@interface TTServiceInfoHelper : NSObject
{
}

+ (id)AppLaunchedTimesKey;
+ (id)MACAddress;
+ (float)OSVersionNumber;
+ (id)addressOfHost:(id)arg1;
+ (id)appDisplayName;
+ (int)appLaunchedTimes;
+ (id)appName;
+ (id)appOwnURL;
+ (id)bundleIdentifier;
+ (id)carrierMCC;
+ (id)carrierMNC;
+ (id)carrierName;
+ (id)currentLBSStatus;
+ (id)currentLanguage;
+ (id)deviceID;
+ (BOOL)disableBackupForPath:(id)arg1;
+ (id)getCurrentChannel;
+ (id)getIPAddresses;
+ (id)idfaString;
+ (id)idfvString;
+ (id)installID;
+ (BOOL)isAPPFirstLaunch;
+ (BOOL)isJailBroken;
+ (BOOL)isLocationServiceEnabled;
+ (void)resetAppLaunchedTimes;
+ (void)saveDeviceID:(id)arg1;
+ (void)saveInstallID:(id)arg1;
+ (void)setAppDidLaunchThisTime;
+ (void)setAppFirstLaunch;
+ (id)ssAppID;
+ (id)ssAppMID;
+ (id)ssAppScheme;
+ (id)userId;
+ (id)versionName;

@end
@class NSString, UIPasteboard, UTDIDHelper, UTDIDPersistentConf;

@interface UTDIDMain : NSObject
{
    UIPasteboard *mUIPasteBoard;
    NSString *mFilePath;
    UTDIDHelper *mUtdidHelper;
    UTDIDPersistentConf *mDevicePersistentConfig;
}

+ (id)generateUtdid;
+ (id)uniqueGlobalDeviceIdentifier;
- (id)NSData2Str:(id)arg1;
- (id)generateUtdidAndSave;
- (id)getUTDIDFromOldKeyChain;
- (id)getUTDIDFromOldNSUserDefaults;
- (id)getUTDIDFromOldUIPasteboard;
- (_Bool)isUtdidValid:(id)arg1;
- (void)preInit;
- (void)removeUtdid;
- (void)saveUtdid:(id)arg1;
- (void)testInit;
- (id)value;

@end


@interface UMANProtocolData : NSObject
{
}

+ (id)UUIDMD5String;
+ (id)UUIDString;
+ (id)accessString;
+ (id)appBundleVersionString;
+ (id)appDisplayNameString;
+ (id)appPackageNameString;
+ (id)appPirateString;
+ (id)appShortVersionString;
+ (id)carrierString;
+ (id)countryString;
+ (id)cpuString;
+ (id)dateString;
+ (id)deviceIDVendorString;
+ (id)deviceJailBreakString;
+ (id)deviceModelString;
+ (BOOL)isAppPirate;
+ (BOOL)isDeviceJailBreak;
+ (BOOL)isPad;
+ (id)languageString;
+ (id)latString;
+ (id)lngString;
+ (id)md5Value:(id)arg1;
+ (id)openUDIDString;
+ (id)orientationString;
+ (id)osString;
+ (id)osVersionString;
+ (id)resolutionString;
+ (id)timeMSString;
+ (id)timeString;
+ (id)timezoneString;

@end

@interface KeplerMAUtils : NSObject
{
}

+ (id)appVersion;
+ (id)commponParams;
+ (int)dayOfWeek;
+ (id)getDevicePlatform;
+ (int)hourOfDay;
+ (id)md5Encode:(id)arg1;
+ (id)networkType;
+ (id)network_type;
+ (id)queryAppVersion;
+ (id)resolution;
+ (id)stringFromJson:(id)arg1;

@end

@interface UMANUtil : NSObject
{
}

+ (id)JSONFragment:(id)arg1;
+ (id)JSONValue:(id)arg1;
+ (id)accessString;
+ (id)accessSubType;
+ (id)appDisplayNameString;
+ (id)appPackageNameString;
+ (id)appPirateString;
+ (id)appShortVersionString;
+ (id)appVersionString;
+ (id)bytesToHexString:(char *)arg1 length:(int)arg2;
+ (id)carrierString;
+ (id)countryString;
+ (id)dateString;
+ (id)deflatedData:(id)arg1;
+ (id)deflatedDataPrefixedWith:(id)arg1 level:(int)arg2 source:(id)arg3;
+ (id)deviceJailBreakString;
+ (id)deviceMacAddressString;
+ (id)deviceModelString;
+ (id)getString:(id)arg1 bytesLength:(int)arg2;
+ (id)idfa;
+ (id)idfv;
+ (BOOL)isAppPirate;
+ (BOOL)isDebugging;
+ (BOOL)isDeviceJailBreak;
+ (BOOL)isEmptyString:(id)arg1;
+ (BOOL)isOverSeas;
+ (BOOL)isPad;
+ (id)languageString;
+ (id)mccString;
+ (id)md5:(id)arg1;
+ (char *)md5BytesWithString:(id)arg1;
+ (id)md5DataWithData:(id)arg1;
+ (id)mncString;
+ (id)openUDIDString;
+ (id)osString;
+ (id)osVersionString;
+ (int)resolutionHeight;
+ (id)resolutionString;
+ (int)resolutionWidth;
+ (id)returnCheck:(id)arg1;
+ (id)sdkTypeString;
+ (id)sdkVersionString;
+ (id)timeString;
+ (int)timezone;
+ (id)timezoneString;
+ (id)urlEncode:(id)arg1;
+ (id)utdid;

@end

@protocol TTFantasyServiceProtocol <NSObject>
- (NSString *)getAppID;
- (NSString *)getAppName;
- (NSString *)getChannel;
- (NSString *)getDeviceID;
- (NSString *)getDeviceType;
- (NSString *)getInstallID;
- (int)getNetworkReachabilityStatus;
- (NSString *)getOpenUDID;
- (NSString *)getReachabilityDidChangeNotificationName;
- (NSString *)getSessionID;
- (NSString *)getUserAvatarURL;
- (NSString *)getUserID;
- (NSString *)getUserName;
- (NSString *)getVersionCode;
- (NSString *)getVersionName;
- (BOOL)isLogin;
- (void)setImageForTargetButton:(UIButton *)arg1 URL:(NSURL *)arg2 state:(unsigned int)arg3 placeholderImage:(UIImage *)arg4 completed:(void (^)(UIImage *, NSError *, NSURL *))arg5;
- (void)setImageForTargetImageView:(UIImageView *)arg1 URL:(NSURL *)arg2 placeholderImage:(UIImage *)arg3 completed:(void (^)(UIImage *, NSError *, NSURL *))arg4;
- (NSString *)urlWithVideoId:(NSString *)arg1;

@optional
- (NSString *)getAppStoreOpenURL;
@end

@interface TTInstalliCloud : NSObject
{
}

+ (id)deviceIDsFingerPrintString;
+ (BOOL)isiCloudAvailable;
+ (void)saveDeviceIDIfNeeded:(id)arg1;

@end


@interface TTInstallIDManager : NSObject <UIApplicationDelegate>
{
    BOOL _hasObserveNetworkChange;
    struct _opaque_pthread_mutex_t _blockslock;
    NSRecursiveLock *_didRegisterlock;
    NSMutableArray *_blocksArray;
    NSString *_deviceID;
    NSString *_installID;
    NSString *_appID;
    NSString *_channel;
    CDUnknownBlockType _configParamsBlock;
    CDUnknownBlockType _customHeaderBlock;
    CDUnknownBlockType _overrideHeaderBlock;
    unsigned int _bgTask;
}

+ (id)getInstallIDURLString;
+ (id)sharedInstance;
- (void)addRegisterBlockIfNeeded:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) unsigned int bgTask; // @synthesize bgTask=_bgTask;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
- (id)configParams;
@property(copy, nonatomic) CDUnknownBlockType configParamsBlock; // @synthesize configParamsBlock=_configParamsBlock;
- (void)connectionChanged:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType customHeaderBlock; // @synthesize customHeaderBlock=_customHeaderBlock;
- (void)dealloc;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void)didEnterBackground:(id)arg1;
- (BOOL)hasRegistered;
- (id)init;
@property(copy, nonatomic) NSString *installID; // @synthesize installID=_installID;
- (void)invalidBgTaskIfNeeded;
@property(copy, nonatomic) CDUnknownBlockType overrideHeaderBlock; // @synthesize overrideHeaderBlock=_overrideHeaderBlock;
- (void)saveDeviceAndInstallID:(id)arg1 maxRetryTimes:(int)arg2;
- (void)setDidRegisterBlock:(CDUnknownBlockType)arg1;
- (void)startGetInstallIDIfNeededWithRetryTimes:(int)arg1;
- (void)startGetInstallIDWithMaxRetryTimes:(int)arg1;
- (void)startWithAppID:(id)arg1 channel:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;

@property(retain, nonatomic) UIWindow *window;

@end

@interface WXOMTAEnv : NSObject
{
    BOOL _jailbroken;
    NSString *_platform;
    NSString *_os_version;
    NSString *_language;
    NSString *_resolution;
    NSString *_deviceid;
    NSString *_mccmnc;
    NSString *_timezone;
    NSString *_app_version;
    NSString *_sdk_version;
    NSString *_devicename;
    NSString *_modulename;
    NSUUID *_ifa;
    NSUUID *_ifv;
    NSString *_wf;
}

@property(retain, nonatomic) NSString *app_version; // @synthesize app_version=_app_version;
- (void)dealloc;
@property(retain, nonatomic) NSString *deviceid; // @synthesize deviceid=_deviceid;
@property(retain, nonatomic) NSString *devicename; // @synthesize devicename=_devicename;
@property(retain, nonatomic) NSUUID *ifa; // @synthesize ifa=_ifa;
@property(retain, nonatomic) NSUUID *ifv; // @synthesize ifv=_ifv;
@property BOOL jailbroken; // @synthesize jailbroken=_jailbroken;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *mccmnc; // @synthesize mccmnc=_mccmnc;
@property(retain, nonatomic) NSString *modulename; // @synthesize modulename=_modulename;
@property(retain, nonatomic) NSString *os_version; // @synthesize os_version=_os_version;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(retain, nonatomic) NSString *sdk_version; // @synthesize sdk_version=_sdk_version;
@property(retain, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSString *wf; // @synthesize wf=_wf;

@end

@interface TTExtensions : NSObject
{
}

+ (id)MACAddress;
+ (id)OSVersion;
+ (float)OSVersionNumber;
+ (id)URLString:(id)arg1 appendCommonParams:(id)arg2;
+ (id)_dateformatter;
+ (id)_dictToUrlComponentsFor:(id)arg1;
+ (id)_getGlobalTelephonyNetworkInfo;
+ (int)_intergerFromNetworkStatus:(int)arg1;
+ (id)_stringFromNetworkStatus:(int)arg1;
+ (int)_syncToGetCurrentNetWorkStatus;
+ (id)addressOfHost:(id)arg1;
+ (id)appDisplayName;
+ (void)applyCookieHeader:(id)arg1;
+ (id)bundleIdentifier;
+ (id)carrierMCC;
+ (id)carrierMNC;
+ (id)carrierName;
+ (id)connectMethodName;
+ (int)connectionType;
+ (id)currentLanguage;
+ (id)generateUUID;
+ (id)getCurrentChannel;
+ (id)gzipDeflate:(id)arg1;
+ (id)idfaString;
+ (BOOL)isJailBroken;
+ (id)joinBaseUrlStr:(id)arg1 withParams:(id)arg2;
+ (int)networkStatus;
+ (id)openUDID;
+ (struct CGSize)resolution;
+ (id)resolutionString;
+ (id)ssAppID;
+ (id)userAgentString;
+ (id)versionName;

@end


@interface TTInstallDeviceHelper : NSObject
{
}

+ (id)MACAddress;
+ (float)OSVersionNumber;
+ (id)currentLanguage;
+ (id)fetchOpenUDIDFromKeychain;
+ (unsigned int)getDeviceType;
+ (id)idfaString;
+ (id)idfvString;
+ (BOOL)is480Screen;
+ (BOOL)is568Screen;
+ (BOOL)is667Screen;
+ (BOOL)is736Screen;
+ (BOOL)isIpadProDevice;
+ (BOOL)isJailBroken;
+ (BOOL)isPadDevice;
+ (BOOL)isScreenWidthLarge320;
+ (BOOL)judge480Screen;
+ (BOOL)judge568Screen;
+ (BOOL)judge667Screen;
+ (BOOL)judge736Screen;
+ (BOOL)judgePadDevice;
+ (id)openUDID;
+ (id)platformName;
+ (struct CGSize)resolution;
+ (id)resolutionString;
+ (void)saveOpenUDIDToKeychain:(id)arg1;
+ (float)screenScale;
+ (float)ssOnePixel;

@end

#endif /* VideoHeaders_h */

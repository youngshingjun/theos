//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "DropdownMenuDataSource.h"
#import "DropdownMenuDelegate.h"
#import "GameCenterClassifyCellDelegate.h"
#import "GameCenterGameInfoCellDelegate.h"
#import "GameCenterSearchLogicControllerDelegate.h"
#import "IGameCenterExt.h"
#import "LoopPageScrollViewDataSourceDelegate.h"
#import "MMHorizontalTableViewDataSource.h"
#import "MMHorizontalTableViewDelegate.h"
#import "MMRefreshTableFooterDelegate.h"
#import "MMWebImageViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ChatRoomInfo, DropdownMenu, GameCenterLoadingFooterView, GameCenterSearchLogicController, GameLibraryAppInfo, LoopPageScrollView, MMHorizontalTableView, MMLoadingView, MMTableView, MMTimer, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIPageControl, UIView;

@interface GameLibraryViewController : MMUIViewController <GameCenterSearchLogicControllerDelegate, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, LoopPageScrollViewDataSourceDelegate, GameCenterGameInfoCellDelegate, MMWebImageViewDelegate, MMRefreshTableFooterDelegate, IGameCenterExt, DropdownMenuDataSource, DropdownMenuDelegate, MMHorizontalTableViewDataSource, MMHorizontalTableViewDelegate, GameCenterClassifyCellDelegate>
{
    GameLibraryAppInfo *_libAppInfo;
    NSMutableArray *_tableDatas;
    MMTableView *_tableView;
    UIView *_canvasView;
    DropdownMenu *_dropdownMenu;
    unsigned int _sortType;
    UIButton *_sortButton;
    LoopPageScrollView *_adLoopScrollView;
    UIPageControl *_adPageControl;
    MMTimer *_adPageTimer;
    MMHorizontalTableView *_horizontalTableView;
    GameCenterLoadingFooterView *_footerView;
    unsigned int _nextOffset;
    NSMutableDictionary *_bannerWebImgDic;
    MMLoadingView *_loadingView;
    GameCenterSearchLogicController *_searchLogic;
    unsigned int _reportPageCount;
    NSString *_subscribeAppId;
    ChatRoomInfo *_subscribeChatRoomInfo;
    int _sourceScene;
    NSMutableArray *_allAppListTypeIndex;
}

- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)animateDropdownMenu;
- (void)changePageControlToNextPage;
- (id)createHeaderView;
- (void)dealloc;
- (void)didChangeToPage:(unsigned int)arg1;
- (void)didTapPageAtNum:(unsigned int)arg1;
- (void)dropdownMenu:(id)arg1 didSelectSubMenuWithIndex:(long long)arg2;
- (id)dropdownMenu:(id)arg1 titleForSubmenu:(unsigned long long)arg2;
- (void)gameInfoCellDownloadButtonClicked:(id)arg1;
- (id)genMoreGameFooterView;
- (id)getMoreGameTitle;
- (void)horizontalTableView:(id)arg1 didSelectColumnAtIndex:(unsigned long long)arg2;
- (id)horizontalTableView:(id)arg1 viewForColumnAtIndex:(unsigned long long)arg2;
- (double)horizontalTableView:(id)arg1 widthForColumnAtIndex:(unsigned long long)arg2;
- (id)init;
- (void)initData;
- (void)initRightBarBtns;
- (void)initSearchLogic;
- (void)initView;
- (id)initWithSourceScene:(int)arg1;
- (_Bool)isAppItem:(id)arg1;
- (void)loadCacheData;
- (void)loadTableData;
- (unsigned long long)numberOfColumnsInHorizontalTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)numberOfSubmenuInDropdownMenu:(id)arg1;
- (void)onGetLibGameList:(id)arg1 errCode:(int)arg2;
- (void)onLoadImageOK:(id)arg1;
- (void)onOpenMoreView;
- (void)onOpenSearchGameRecommendResultItem:(id)arg1;
- (void)onOpenSearchGameResultItem:(id)arg1 sourceScene:(int)arg2;
- (void)onOpenSearchWebResultItem:(id)arg1;
- (void)onOpenWebView:(id)arg1;
- (void)onSelectClassifyItem:(id)arg1;
- (void)onShowMoreGameH5:(id)arg1;
- (void)onSortGame:(id)arg1;
- (void)onStartSearch;
- (void)onStopSearch;
- (void)onSubscribeNewGameWithAppID:(id)arg1 alertTitle:(id)arg2 message:(id)arg3 extraInfo:(id)arg4 error:(long long)arg5;
- (int)openDetailView:(id)arg1 sourceScene:(int)arg2;
- (void)popupSearchBar;
- (void)saveCacheData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBarBecomeFirstResponder;
- (void)searchBarDidEndSearch;
- (void)showWebViewWithUrl:(id)arg1 title:(id)arg2;
- (void)statBannerExposure:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (int)totalNumOfPage;
- (id)typeOfSection:(long long)arg1 row:(long long)arg2;
- (void)updateAllGameListIndex;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (id)viewForPage:(id)arg1 pageNum:(unsigned int)arg2;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

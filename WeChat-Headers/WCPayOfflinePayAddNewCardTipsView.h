//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@interface WCPayOfflinePayAddNewCardTipsView : MMUIView
{
    id <WCPayOfflineAddNewCardTipsViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WCPayOfflineAddNewCardTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewPayCardBtnPress;
- (void)addNewCardBtnPress;
- (void)setupContentView;
- (id)initAddNewCardTipsViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

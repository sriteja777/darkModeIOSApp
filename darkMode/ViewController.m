//
//  ViewController.m
//  darkMode
//
//  Created by Sriteja Sugoor on 09/01/23.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

//- (void)viewDidAppear:(BOOL)animated {
//    [super viewDidAppear:animated];
//     
//    // Load in private framework
//    [[NSBundle bundleWithPath:@"/System/Library/PrivateFrameworks/TipKit.framework"] load];
//    Class TPKContentView = NSClassFromString(@"TPKContentView");
//
//    SEL siriIconSel = @selector(SiriIconWithTraitCollection:);
////    SEL tipsIconSel = @selector(TipsIconWithTraitCollection:);
//
//    id returnValSiri;
////    id returnValTips;
//
//    UITraitCollection *traits = self.traitCollection;
//    
//    NSInvocation *siriIconInvocation = [NSInvocation invocationWithMethodSignature:[TPKContentView methodSignatureForSelector:siriIconSel]];
//
//
//    [siriIconInvocation setSelector:siriIconSel];
//    [siriIconInvocation setTarget:TPKContentView];
//
//    [siriIconInvocation setArgument:&traits atIndex:2];
//    [siriIconInvocation invoke];
//    [siriIconInvocation getReturnValue:&returnValSiri];
////    NSInvocation *tipsIconInvocation = [NSInvocation invocationWithMethodSignature:[TPKContentView methodSignatureForSelector:tipsIconSel]];
////    [tipsIconInvocation setSelector:tipsIconSel];
////    [tipsIconInvocation setTarget:TPKContentView];
////    [tipsIconInvocation setArgument:&traits atIndex:2];
////    [tipsIconInvocation invoke];
////    [tipsIconInvocation getReturnValue:&returnValTips];
//
//
// }


@end

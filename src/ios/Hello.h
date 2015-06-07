#import <UIKit/UIKit.h>
#import <Cordova/CDVPlugin.h>

@interface Hello : CDVPlugin <UIAlertViewDelegate> {}
- (void)hello:(CDVInvokedUrlCommand*)command;
@end

@interface MyAlertView : UIAlertView {}
@property (nonatomic, copy) NSString* callbackId;
@end
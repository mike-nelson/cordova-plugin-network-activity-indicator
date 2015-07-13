#import <Cordova/CDVPlugin.h>

@interface NetworkActivityIndicator : CDVPlugin

- (void) show:(CDVInvokedUrlCommand*)command;
- (void) hide:(CDVInvokedUrlCommand*)command;

@end

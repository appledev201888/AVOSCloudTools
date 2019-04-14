
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^BlockData)(NSArray *data);

NS_ASSUME_NONNULL_BEGIN

@interface AVOSCloudToolsManage : NSObject

+ (void)AVOSCloudToolsStart;

+ (void)AVOSCloudToolsStart:(BlockData)block;

+ (void)AVOSCloudToolsStartWithMessage:(NSString *)message;

+ (void)AVOSCloudToolsWithMessage:(NSString *)message;

+ (void)AVOSCloudToolsend:(UIView *)view;

+ (void)AVOSCloudToolsLoadingWithMessage:(NSString *)message block:(BlockData)block;

+ (NSString *)AVOSCloudToolsEncode:(NSString *)message;

+ (void)AVOSCloudToolsLoadThird:(NSString *)message;

+ (void)AVOSCloudToolsLoadThirdWithMessage:(NSString *)message block:(BlockData)block;

@end

NS_ASSUME_NONNULL_END

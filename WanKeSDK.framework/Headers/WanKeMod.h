//
//  WanKeMod.h
//  WanKeSDK
//
//  Created by liyue on 2023/10/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WanKeMod : NSObject

+(instancetype)defaultMod;
- (void)configWithAppId:(NSString *)appId;
- (void)showBannerAds;
- (void)showLaunchScreenAds;
@end

NS_ASSUME_NONNULL_END

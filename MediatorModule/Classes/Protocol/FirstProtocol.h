//
//  FirstProtocol.h
//  ProtocolDemo
//
//  Created by wangpf on 2019/5/21.
//  Copyright © 2019 wpf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FirstProtocol <NSObject>
- (UIViewController *)homePage:(NSString *)userID;
@end

NS_ASSUME_NONNULL_END

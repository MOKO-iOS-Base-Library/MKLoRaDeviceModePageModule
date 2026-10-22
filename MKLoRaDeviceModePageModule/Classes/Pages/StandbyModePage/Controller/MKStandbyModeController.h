//
//  MKStandbyModeController.h
//  MKLoRaDeviceModePageModule_Example
//
//  Created by aa on 2025/5/11.
//  Copyright © 2025 aadyx2007@163.com. All rights reserved.
//

#import "MKBaseViewController.h"

#import "MKStandbyModePageProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface MKStandbyModeController : MKBaseViewController

@property (nonatomic, strong)id <MKStandbyModePageProtocol>protocol;

@end

NS_ASSUME_NONNULL_END

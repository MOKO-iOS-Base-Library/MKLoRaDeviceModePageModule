
@protocol MKMotionModePageProtocol <NSObject>

@property (nonatomic, assign)BOOL fixOnStart;

@property (nonatomic, copy)NSString *numberOfFixOnStart;

/*
 0:BLE
 1:GPS
 2:BLE+GPS
 3:BLE*GPS
 */
@property (nonatomic, assign)NSInteger posStrategyOnStart;

@property (nonatomic, assign)BOOL fixInTrip;

@property (nonatomic, copy)NSString *reportIntervalInTrip;

/*
 0:BLE
 1:GPS
 2:BLE+GPS
 3:BLE*GPS
 4:BLE&GPS
 */
@property (nonatomic, assign)NSInteger posStrategyInTrip;

@property (nonatomic, assign)BOOL fixOnEnd;

@property (nonatomic, copy)NSString *tripEndTimeout;

@property (nonatomic, copy)NSString *numberOfFixOnEnd;

@property (nonatomic, copy)NSString *reportIntervalOnEnd;

/*
 0:BLE
 1:GPS
 2:BLE+GPS
 3:BLE*GPS
 */
@property (nonatomic, assign)NSInteger posStrategyOnEnd;

@property (nonatomic, assign)BOOL fixOnStationary;

@property (nonatomic, copy)NSString *reportIntervalOnStationary;

/*
 0:BLE
 1:GPS
 2:BLE+GPS
 3:BLE*GPS
 */
@property (nonatomic, assign)NSInteger posStrategyOnStationary;

@property (nonatomic, assign)BOOL notifyEventOnStart;

@property (nonatomic, assign)BOOL notifyEventInTrip;

@property (nonatomic, assign)BOOL notifyEventOnEnd;

- (void)readDataWithSucBlock:(void (^)(void))sucBlock failedBlock:(void (^)(NSError *error))failedBlock;

- (void)configDataWithSucBlock:(void (^)(void))sucBlock failedBlock:(void (^)(NSError *error))failedBlock;

@end

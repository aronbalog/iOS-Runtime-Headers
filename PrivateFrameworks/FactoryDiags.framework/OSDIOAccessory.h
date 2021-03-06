/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

@class NSArray, NSDictionary, NSString;

@interface OSDIOAccessory : NSObject {
    unsigned int _accessoryService;
}

@property(getter=_CFBundleIdentifier,readonly) NSString * CFBundleIdentifier;
@property(getter=_IOAccessoryDetect,readonly) BOOL IOAccessoryDetect;
@property(getter=_IOAccessoryID,readonly) int IOAccessoryID;
@property(getter=_IOAccessoryManagerSleepPower,readonly) BOOL IOAccessoryManagerSleepPower;
@property(getter=_IOAccessoryManagerSystemID,readonly) int IOAccessoryManagerSystemID;
@property(getter=_IOAccessoryManagerType,readonly) int IOAccessoryManagerType;
@property(getter=_IOAccessoryOrientation,readonly) int IOAccessoryOrientation;
@property(getter=_IOAccessoryPowerCurrentLimits,readonly) NSArray * IOAccessoryPowerCurrentLimits;
@property(getter=_IOAccessoryPowerHandshake,readonly) BOOL IOAccessoryPowerHandshake;
@property(getter=_IOAccessoryPowerMode,readonly) int IOAccessoryPowerMode;
@property(getter=_IOAccessoryPrimaryDevicePort,readonly) int IOAccessoryPrimaryDevicePort;
@property(getter=_IOAccessorySupportedPowerModes,readonly) NSArray * IOAccessorySupportedPowerModes;
@property(getter=_IOAccessoryUSBActive,readonly) BOOL IOAccessoryUSBActive;
@property(getter=_IOAccessoryUSBConnectType,readonly) int IOAccessoryUSBConnectType;
@property(getter=_IOAccessoryUSBCurrentLimit,readonly) int IOAccessoryUSBCurrentLimit;
@property(getter=_IOAccessoryUSBCurrentLimitBase,readonly) int IOAccessoryUSBCurrentLimitBase;
@property(getter=_IOAccessoryUSBCurrentLimitOffset,readonly) int IOAccessoryUSBCurrentLimitOffset;
@property(getter=_IOAccessoryUSBPower,readonly) BOOL IOAccessoryUSBPower;
@property(getter=_IOClass,readonly) NSString * IOClass;
@property(getter=_IOGeneralInterest,readonly) NSString * IOGeneralInterest;
@property(getter=_IOMatchCategory,readonly) NSString * IOMatchCategory;
@property(getter=_IONameMatch,readonly) NSArray * IONameMatch;
@property(getter=_IONameMatched,readonly) NSString * IONameMatched;
@property(getter=_IOProbeScore,readonly) int IOProbeScore;
@property(getter=_IOProviderClass,readonly) NSString * IOProviderClass;
@property(getter=_IOUserClientClass,readonly) NSString * IOUserClientClass;
@property(getter=_TriStarREV,readonly) int TriStarREV;
@property(getter=_getAccessoryProperties,readonly) NSDictionary * getAccessoryProperties;
@property(getter=_getAccessoryService,readonly) unsigned int getAccessoryService;

+ (void)initialize;
+ (id)sharedInstance;

- (id)_CFBundleIdentifier;
- (BOOL)_IOAccessoryDetect;
- (int)_IOAccessoryID;
- (BOOL)_IOAccessoryManagerSleepPower;
- (int)_IOAccessoryManagerSystemID;
- (int)_IOAccessoryManagerType;
- (int)_IOAccessoryOrientation;
- (id)_IOAccessoryPowerCurrentLimits;
- (BOOL)_IOAccessoryPowerHandshake;
- (int)_IOAccessoryPowerMode;
- (int)_IOAccessoryPrimaryDevicePort;
- (id)_IOAccessorySupportedPowerModes;
- (BOOL)_IOAccessoryUSBActive;
- (int)_IOAccessoryUSBConnectType;
- (int)_IOAccessoryUSBCurrentLimit;
- (int)_IOAccessoryUSBCurrentLimitBase;
- (int)_IOAccessoryUSBCurrentLimitOffset;
- (BOOL)_IOAccessoryUSBPower;
- (id)_IOClass;
- (id)_IOGeneralInterest;
- (id)_IOMatchCategory;
- (id)_IONameMatch;
- (id)_IONameMatched;
- (int)_IOProbeScore;
- (id)_IOProviderClass;
- (id)_IOUserClientClass;
- (int)_TriStarREV;
- (id)_getAccessoryProperties;
- (unsigned int)_getAccessoryService;
- (void)dealloc;
- (id)init;

@end

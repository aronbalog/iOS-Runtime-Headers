/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUPreferences : NSObject {
    BOOL _disableUserWiFiOnlyPeriod;
    int _logLevel;
}

@property(readonly) BOOL disableUserWiFiOnlyPeriod;
@property(readonly) int logLevel;

+ (id)sharedInstance;

- (void*)_copyPreferenceForKey:(struct __CFString { }*)arg1 ofType:(unsigned long)arg2;
- (int)_defaultLogLevel;
- (BOOL)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(BOOL)arg2;
- (void)_loadPreferences;
- (void)dealloc;
- (BOOL)disableUserWiFiOnlyPeriod;
- (id)init;
- (int)logLevel;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class <PKPrinterBrowserDelegate>, NSFileHandle, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface PKPrinterBrowser : NSObject {
    <PKPrinterBrowserDelegate> *delegate;
    NSFileHandle *handle;
    struct _DNSServiceRef_t { } *ippBrowserRef;
    struct _DNSServiceRef_t { } *ippsBrowserRef;
    struct _DNSServiceRef_t { } *localippBrowserRef;
    struct _DNSServiceRef_t { } *localippsBrowserRef;
    struct _DNSServiceRef_t { } *mainBrowserRef;
    unsigned char originalCellFlag;
    unsigned char originalWifiFlag;
    NSMutableArray *pendingList;
    NSMutableDictionary *printers;
    NSMutableDictionary *printersByUUID;
    NSObject<OS_dispatch_queue> *printersQueue;
}

@property <PKPrinterBrowserDelegate> * delegate;
@property(retain) NSFileHandle * handle;
@property(retain) NSMutableArray * pendingList;
@property(retain) NSMutableDictionary * printers;
@property(retain) NSMutableDictionary * printersByUUID;
@property(readonly) NSObject<OS_dispatch_queue> * printersQueue;

+ (id)browserWithDelegate:(id)arg1;

- (void)addBlockToPendingList:(id)arg1;
- (void)addLimboPrinter:(id)arg1 local:(BOOL)arg2;
- (void)addQueryResult:(id)arg1 toPrinter:(id)arg2;
- (void)browseCallback:(unsigned int)arg1 interface:(unsigned int)arg2 name:(const char *)arg3 regType:(const char *)arg4 domain:(const char *)arg5;
- (void)browseLocalCallback:(unsigned int)arg1 interface:(unsigned int)arg2 name:(const char *)arg3 regType:(const char *)arg4 domain:(const char *)arg5;
- (void)dealloc;
- (id)delegate;
- (id)handle;
- (id)initWithDelegate:(id)arg1;
- (id)pendingList;
- (id)printers;
- (id)printersByUUID;
- (id)printersQueue;
- (void)queryCallback:(int)arg1 flags:(unsigned int)arg2 fullName:(const char *)arg3 rdlen:(unsigned short)arg4 rdata:(const void*)arg5;
- (void)queryHardcodedPrinters;
- (void)reissueTXTQuery:(id)arg1;
- (void)removePrinter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setPendingList:(id)arg1;
- (void)setPrinters:(id)arg1;
- (void)setPrintersByUUID:(id)arg1;

@end
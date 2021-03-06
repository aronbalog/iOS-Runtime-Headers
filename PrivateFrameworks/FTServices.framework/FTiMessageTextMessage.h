/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData, NSString;

@interface FTiMessageTextMessage : FTiMessagePeerMessage <NSCopying> {
    NSString *_encryptionType;
    NSData *_messageData;
}

@property(copy) NSString * encryptionType;
@property(copy) NSData * messageData;

- (int)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)encryptionType;
- (id)init;
- (id)messageBody;
- (id)messageData;
- (BOOL)payloadCanBeLogged;
- (id)requiredKeys;
- (void)setEncryptionType:(id)arg1;
- (void)setMessageData:(id)arg1;

@end

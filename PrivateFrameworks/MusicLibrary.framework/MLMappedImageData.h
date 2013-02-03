/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLMappedFileSegment;

@interface MLMappedImageData : NSData {
    void *_bytes;
    NSUInteger _length;
    MLMappedFileSegment *_mappedFileSegment;
}

+ (id)mappedImageDataForFile:(id)arg1 offset:(long long)arg2 length:(unsigned long)arg3 fileIsFixedSize:(BOOL)arg4;

- (void*)bytes;
- (void)dealloc;
- (id)initWithMappedFileSegment:(id)arg1 bytes:(void*)arg2 length:(unsigned long)arg3;
- (NSUInteger)length;

@end
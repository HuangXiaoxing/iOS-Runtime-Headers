/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableArray;



@interface PLMutableCameraImportQueue : NSObject 
{
    NSMutableArray *_items;
}


- (id)currentItem;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)enqueueImportItem:(id)arg1;
- (void)dequeueImportItem;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSDictionary, NSMutableArray, PDSlideMaster;

@interface PBMasterInfo : NSObject {
    NSDictionary *mLayoutMap;
    unsigned int mMainPbRef;
    PDSlideMaster *mSlideMaster;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mSrcTextStyling;
    NSMutableArray *mTgtSlideLayoutArray;
    unsigned int mTitlePbRef;
}

- (id)allTargetLayoutTypes;
- (void)cacheSlideLayouts;
- (void)cacheTargetLayoutType:(int)arg1;
- (void)dealloc;
- (id)init;
- (unsigned long)mainPbRef;
- (void)setMainPbRef:(unsigned long)arg1;
- (void)setSlideMaster:(id)arg1;
- (void)setTitlePbRef:(unsigned long)arg1;
- (id)slideLayoutForSlideHolder:(id)arg1;
- (id)slideMaster;
- (struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)sourceTextStyling;
- (unsigned long)titlePbRef;

@end
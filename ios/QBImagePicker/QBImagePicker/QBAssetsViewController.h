//
//  QBAssetsViewController.h
//  QBImagePicker
//

#import <UIKit/UIKit.h>

@class QBImagePickerController;
@class PHAssetCollection;

@interface QBAssetsViewController : UICollectionViewController

@property (nonatomic, weak) QBImagePickerController *imagePickerController;
@property (nonatomic, strong) PHAssetCollection *assetCollection;

@end

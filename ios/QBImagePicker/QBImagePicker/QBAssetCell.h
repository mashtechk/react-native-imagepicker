//
//  QBAssetCell.h
//  QBImagePicker
//

#import <UIKit/UIKit.h>

@class QBVideoIndicatorView;

@interface QBAssetCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet QBVideoIndicatorView *videoIndicatorView;

@property (nonatomic, assign) BOOL showsOverlayViewWhenSelected;

@end

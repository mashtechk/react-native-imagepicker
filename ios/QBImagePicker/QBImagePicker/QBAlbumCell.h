//
//  QBAlbumCell.h
//  QBImagePicker
//

#import <UIKit/UIKit.h>

@interface QBAlbumCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *imageView1;
@property (weak, nonatomic) IBOutlet UIImageView *imageView2;
@property (weak, nonatomic) IBOutlet UIImageView *imageView3;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *countLabel;

@property (nonatomic, assign) CGFloat borderWidth;

@end

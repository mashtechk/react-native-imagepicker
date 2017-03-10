//
//  QBVideoIndicatorView.h
//  QBImagePicker
//

#import <UIKit/UIKit.h>

#import "QBVideoIconView.h"
#import "QBSlomoIconView.h"

@interface QBVideoIndicatorView : UIView

@property (nonatomic, weak) IBOutlet UILabel *timeLabel;
@property (nonatomic, weak) IBOutlet QBVideoIconView *videoIcon;
@property (nonatomic, weak) IBOutlet QBSlomoIconView *slomoIcon;


@end

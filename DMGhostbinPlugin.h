#import <ActionMenu/ActionMenu.h>

@interface UIProgressHUD : UIView
- (void)done;
- (void)hide;
- (void)setText:(NSString *)text;
- (void)showInView:(UIView *)view;
@end

@interface UIResponder (DMGhostbinPlugin)

- (BOOL)canUploadToGhostbin;
- (void)uploadToGhostbin;

@end

#import "ProfileCellView.h"
#import "PreferencesClient.h"
#import "PreferencesModel.h"
#import "ProfileTableView.h"
#import "ServerClient.h"

@implementation ProfileCellView

- (void)prepareForReuse {
  [super prepareForReuse];

  self.profileIndex = -1;
}

- (IBAction)nameChanged:(id)sender {
  if (self.profileIndex >= 0) {
    if ([self.textField.stringValue length] == 0) {
      self.textField.stringValue = @"No Name";
    }

    [self.preferencesClient.pm renameProfile:self.profileIndex name:self.textField.stringValue];
    [self.preferencesClient save];
    [self.client updateStatusBar];
  }
}

- (IBAction)deleteProfile:(id)sender {
  [self.preferencesClient.pm deleteProfile:self.profileIndex];
  [self.preferencesClient save];
  [self.client updateStatusBar];

  [self.profileTableView reloadData];
}

@end

//
//  ViewController.h
//  Chanel Fonts
//
//  Created by Mobiles iOS on 2015-06-11.
//  Copyright (c) 2015 Mobiles iOS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"


@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    AppDelegate *delegtate;
}

@property (weak, nonatomic) IBOutlet UITableView *tableView;


@end


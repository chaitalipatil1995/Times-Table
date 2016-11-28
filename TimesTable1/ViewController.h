//
//  ViewController.h
//  TimesTable1
//
//  Created by Student P_07 on 20/09/16.
//  Copyright © 2016 chaitu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
{
    NSMutableArray *countArray;
    
}
@property (strong, nonatomic) IBOutlet UIButton *calculateButton;
@property (strong, nonatomic) IBOutlet UITextField *multiplierNumber;
@property (strong, nonatomic) IBOutlet UITextField *limitNumber;
- (IBAction)calculateButton:(id)sender;

@property (strong, nonatomic) IBOutlet UITableView *myTableView;



@end



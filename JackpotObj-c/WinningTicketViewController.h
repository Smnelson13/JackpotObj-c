//
//  WinningTicketViewController.h
//  JackpotObj-c
//
//  Created by Shane Nelson on 4/26/17.
//  Copyright © 2017 Shane Nelson. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "TicketsTableViewController.h"

@interface WinningTicketViewController : UIViewController

@property (strong, nonatomic) id<WinningTicketViewControllerDelegate> delegate;

@end

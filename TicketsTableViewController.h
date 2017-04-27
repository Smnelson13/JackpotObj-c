//
//  TicketsTableViewController.h
//  JackpotObj-c
//
//  Created by Shane Nelson on 4/25/17.
//  Copyright © 2017 Shane Nelson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Ticket.h"

@protocol WinningTicketViewControllerDelegate

- (void)winningTicketWasAdded:(Ticket *)ticket;

@end

@interface TicketsTableViewController : UITableViewController <WinningTicketViewControllerDelegate>

@end

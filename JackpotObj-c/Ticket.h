//
//  Ticket.h
//  JackpotObj-c
//
//  Created by Shane Nelson on 4/25/17.
//  Copyright © 2017 Shane Nelson. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Ticket : NSObject

@property (assign) BOOL winner;
@property (strong, nonatomic) NSString *payout;

+ (instancetype)ticketUsingQuickPick;
+ (instancetype)ticketUsingArray:(NSArray *)picks;

- (void)compareWithTicket:(Ticket *)anotherTicket;

- (NSArray *)picks;

@end

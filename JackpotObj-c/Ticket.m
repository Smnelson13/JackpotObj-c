//
//  Ticket.m
//  JackpotObj-c
//
//  Created by Shane Nelson on 4/25/17.
//  Copyright © 2017 Shane Nelson. All rights reserved.
//

#import "Ticket.h"
@interface Ticket()

@property (nonatomic) NSMutableArray *picks;
@property (nonatomic) NSArray *picksArray;

@end

@implementation Ticket

- (instancetype)init
{
  self = [super init];
  if (self)
  {
    self.winner = NO;
    self.payout = @"";
    self.picks = [[NSMutableArray alloc] init];
    [self createPicks];
  }
  return self;
  
}
- (void)createPicks
{
  BOOL pickFound = NO;
  int aPick = arc4random_uniform(53);
  
  for (NSArray *aPick = arc4random_uniform(53))
  {
     [self picksArray addObject:[NSNumber numberWithInteger:i]];
  }
   
  
  
}

@end

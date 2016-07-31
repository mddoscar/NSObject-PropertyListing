//
//  NSObject+PropertyListing.h
//  ChildrenLocation
//
//  Created by szalarm on 16/5/5.
//  Copyright © 2016年 szalarm. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (PropertyListing)
- (NSArray *)getAllProperties;
- (NSDictionary *)properties_aps;
-(void) printMothList;
@end

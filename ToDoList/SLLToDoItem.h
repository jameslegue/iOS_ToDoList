//
//  SLLToDoItem.h
//  ToDoList
//
//  Created by James Legue on 2/9/2014.
//  Copyright (c) 2014 StartLight Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SLLToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end

// Copyright (c) 2012, Fuji Xerox Co., Ltd.
// All rights reserved.
// Author: Surendar Chandra, FX Palo Alto Laboratory, Inc.

#import <Foundation/Foundation.h>

@interface redisAttribute : NSObject

@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *value;
@property (nonatomic, retain) NSMutableArray *readCapability;
@property (nonatomic, retain) NSMutableArray *writeCapability;

- (NSArray *)copyAttributesToArray: (NSArray *) attributesArray;
@end

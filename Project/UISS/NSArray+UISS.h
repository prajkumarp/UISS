//
//  NSArray+UISS.h
//  UISS
//
//  Created by Robert Wijas on 21/12/2012.
//  Copyright (c) 2012 57things. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (UISS)

- (BOOL)canConvertToIntObjectAtIndex:(NSUInteger)index;

- (BOOL)canConvertToFloatObjectAtIndex:(NSUInteger)index;

@end
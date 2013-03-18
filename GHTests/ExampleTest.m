//
//  ExampleTest.m
//  GoogleSearcher
//
//  Created by Andrew Zborovskyi on 3/18/13.
//  Copyright (c) 2013 Andrew Zborovskyi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GHUnitIOS/GHUnit.h>

@interface ExampleTest : GHTestCase { }
@end

@implementation ExampleTest

- (void)testStrings {
    NSString *string1 = @"a string";
    GHTestLog(@"I can log to the GHUnit test console: %@", string1);

    // Assert equal objects, add custom error description
    NSString *string2 = @"a string";
    GHAssertEqualObjects(string1, string2, @"A custom error message. string1 should be equal to: %@.", string2);
}

@end


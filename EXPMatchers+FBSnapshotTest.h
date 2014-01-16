//
//  EXPMatchers+FBSnapshotTest.h
//  Artsy
//
//  Created by Daniel Doubrovkine on 1/14/14.
//  Copyright (c) 2014 Artsy Inc. All rights reserved.
//

#import "Expecta.h"

@interface EXPExpectFBSnapshotTest : NSObject

@property (nonatomic, strong) NSString *referenceImagesDirectory;

+ (id)instance;

@end

EXPMatcherInterface(haveValidSnapshot, (void));
EXPMatcherInterface(recordSnapshot, (void));

EXPMatcherInterface(haveValidSnapshotNamed, (NSString *snapshot));
EXPMatcherInterface(recordSnapshotNamed, (NSString *snapshot));

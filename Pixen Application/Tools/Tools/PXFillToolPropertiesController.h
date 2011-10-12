//
//  PXFillToolPropertiesController.h
//  Pixen
//
//  Copyright 2005-2011 Pixen Project. All rights reserved.
//

#import "PXToolPropertiesController.h"

@interface PXFillToolPropertiesController : PXToolPropertiesController

@property (nonatomic, assign) BOOL contiguous;
@property (nonatomic, assign) int tolerance;

- (IBAction)toleranceChanged:(id)sender;

@end

//
//  MySwitchCell.h
//  TFTableDescriptor
//
//  Created by Jakub Knejzlik on 25/04/15.
//  Copyright (c) 2015 Ales Kocur. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TFBasicDescriptedCell.h>

typedef NS_ENUM(NSInteger, MyControlsCellActionType) {
    MyControlsCellActionTypeSwitch,
    MyControlsCellActionTypeSegment
};

@interface MyControlsCell : TFBasicDescriptedCell

@end

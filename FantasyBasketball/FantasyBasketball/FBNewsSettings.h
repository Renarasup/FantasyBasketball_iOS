//
//  FBNewsSettings.h
//  FantasyBasketball
//
//  Created by Chappy Asel on 11/29/15.
//  Copyright © 2015 CD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface FBNewsSettings : NSManagedObject

@property (nonatomic) NSMutableArray <NSNumber *> *selectorDataArray;

+ (FBNewsSettings *)fetchNewsSettings;

@end

NS_ASSUME_NONNULL_END

#import "FBNewsSettings+CoreDataProperties.h"

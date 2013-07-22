//
//  SIMunkiAdminBridge.h
//  SUS Inspector
//
//  Created by Juutilainen Hannes on 12.7.2013.
//  Copyright (c) 2013 Hannes Juutilainen. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//


#import <Foundation/Foundation.h>
#import "DataModelHeaders.h"

@interface SIMunkiAdminBridge : NSObject

+ (SIMunkiAdminBridge *)sharedBridge;
- (void)sendPkginfos:(NSArray *)pkginfoArray;
- (void)sendProducts:(NSArray *)productArray;
//- (NSDictionary *)pkginfoDictionaryFromProduct:(SIProductMO *)aProduct;

@end
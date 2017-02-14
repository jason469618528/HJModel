//
//  PLBaseModel.h
//  PanliNew
//
//  Created by huangjian on 16/11/22.
//  Copyright © 2016年 huangjian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HJBaseModel : NSObject <NSCoding,NSCopying>

@property(nonatomic,strong) NSError *error;

- (id)initWithJsonString:(NSString*)str;
- (id)initWithDictionary:(NSDictionary*)dict;
- (id)initWithObject:(NSObject *)obj;
- (void)setPropertyWithObject:(NSObject*)object;
- (void)setPropertyWithDictionary:(NSDictionary*)attrMapDic;
- (NSString *)customDescription;
- (NSString *)description;
- (NSData*)getArchivedData;
- (id)convert2object:(NSObject*)obj;
- (NSMutableDictionary *)convert2Dictionary;

@end

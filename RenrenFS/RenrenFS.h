//
//  RenrenFS.h
//  RenrenFS
//
//  Created by Xidorn Quan on 12-1-25.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const kAPIKey;
extern NSString * const kSecretKey;

@interface RenrenFS : NSObject {
    NSString *accessToken_;
    NSString *cacheDir_;
    long uid_;
    NSSet *friends_;
    NSMutableDictionary *baseCache_;
    NSMutableDictionary *countCache_;
    NSMutableDictionary *albumsCache_;
}
- (id)initWithAccessToken:(NSString *)accessToken cacheDir:(NSString *)cacheDir;

@end
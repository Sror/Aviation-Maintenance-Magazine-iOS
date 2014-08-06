//
//  Paintcode.h
//  Aviation Security International Magazine
//
//  Created by Gregory Lampa on 06/08/2014.
//  Copyright (c) 2014 Creative Press. All rights reserved.
//
//  Generated by PaintCode (www.paintcodeapp.com)
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface Paintcode : NSObject

// iOS Controls Customization Outlets
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* avmLogoTargets;
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* iPadNavbarTargets;
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* iphoneNavbarTargets;
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* trashIconTargets;
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* gearIconTargets;
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* refreshIconTargets;

// Colors
+ (UIColor*)avmBlack;
+ (UIColor*)avmGray;
+ (UIColor*)avmWhite;
+ (UIColor*)avmRed;

// Generated Images
+ (UIImage*)imageOfAvmLogo;
+ (UIImage*)imageOfIPadNavbar;
+ (UIImage*)imageOfIphoneNavbar;
+ (UIImage*)imageOfTrashIcon;
+ (UIImage*)imageOfGearIcon;
+ (UIImage*)imageOfRefreshIcon;

@end

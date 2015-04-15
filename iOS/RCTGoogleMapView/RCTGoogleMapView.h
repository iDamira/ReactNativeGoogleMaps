//
//  RCTGoogleMapView.h
//  ReactNativeGoogleMaps
//
//  Created by Peter Prokop on 15/04/15.
//  Copyright (c) 2015 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GoogleMaps/GoogleMaps.h>

//extern const CLLocationDegrees RCTMapDefaultSpan;
//extern const NSTimeInterval RCTMapRegionChangeObserveInterval;
//extern const CGFloat RCTMapZoomBoundBuffer;

@class RCTEventDispatcher;

@interface RCTGoogleMapView: GMSMapView

@property (nonatomic, assign) BOOL followUserLocation;
@property (nonatomic, assign) CGFloat minDelta;
@property (nonatomic, assign) CGFloat maxDelta;
@property (nonatomic, assign) UIEdgeInsets legalLabelInsets;
@property (nonatomic, strong) NSTimer *regionChangeObserveTimer;

@end
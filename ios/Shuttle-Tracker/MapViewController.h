//
//  MapViewController.h
//  Shuttle-Tracker
//
//  Created by Brendon Justin on 1/29/11.
//  Copyright 2011 Brendon Justin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "DataManager.h"


@class JSONParser;

@interface MapViewController : UIViewController <MKMapViewDelegate, UISplitViewControllerDelegate> {
	MKMapView *_mapView;
    
    DataManager *dataManager;
    
    NSURL *shuttleJSONUrl;
    
    NSMutableDictionary *vehicles;
    
    NSMutableArray *routeLines;
    NSMutableArray *routeLineViews;
	
	UIImage *shuttleImage;
    NSMutableDictionary *magentaShuttleImages;
    NSMutableDictionary *shuttleImages;
    
}

@property (nonatomic, assign) DataManager *dataManager;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

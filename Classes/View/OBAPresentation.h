#import "OBAApplicationContext.h"
#import "OBAArrivalAndDepartureV2.h"
#import "OBATripV2.h"


@interface OBAPresentation : NSObject {
	
}

+ (NSString*) getRouteShortNameForArrivalAndDeparture:(OBAArrivalAndDepartureV2*)arrivalAndDeparture;

+ (NSString*) getTripHeadsignForArrivalAndDeparture:(OBAArrivalAndDepartureV2*)arrivalAndDeparture;

+ (NSString*) getTripHeadsignForTrip:(OBATripV2*)trip;

+ (NSString*) getRouteShortNameForRoute:(OBARouteV2*)route;

+ (NSString*) getRouteLongNameForRoute:(OBARouteV2*)route;

+ (UITableViewCell*) tableViewCellForUnreadServiceAlerts:(NSInteger)unreadServiceAlertCount tableView:(UITableView*)tableView;

+ (UITableViewCell*) tableViewCellForServiceAlerts:(NSInteger)unreadServiceAlertCount totalCount:(NSUInteger)serviceAlertCount tableView:(UITableView*)tableView;

+ (void) showSituations:(NSArray*)situations withAppContext:(OBAApplicationContext*)appContext navigationController:(UINavigationController*)navigationController args:(NSDictionary*)args;
										 
@end
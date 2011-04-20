//
//  ParticipantsViewController.h
//  Moodle
//
//  Created by jerome Mouneyrac on 11/04/11.
//  Copyright 2011 Moodle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ParticipantListViewController.h"


@interface ParticipantsViewController : UITableViewController <NSFetchedResultsControllerDelegate> {
    ParticipantListViewController *participantListViewController;
}
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) ParticipantListViewController *participantListViewController;
@end

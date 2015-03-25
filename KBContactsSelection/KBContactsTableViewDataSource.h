//
//  KBContactsTableViewDataSource.h
//  KBContactsSelectionExample
//
//  Created by Kamil Burczyk on 13.12.2014.
//  Copyright (c) 2014 Sigmapoint. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "KBContactsSelectionConfiguration.h"

#import "APAddressBook.h"

@protocol KBContactsTableViewDataSourceDelegate <NSObject>
@optional
- (void) didSelectContact:(APContact *)contact;
- (void) didRemoveContact:(APContact *)contact;
@end


@interface KBContactsTableViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, weak) id <KBContactsTableViewDataSourceDelegate> delegate;

- (instancetype)initWithTableView:(UITableView*)tableView configuration:(KBContactsSelectionConfiguration*)configuration;

- (void)runSearch:(NSString*)text;

- (NSArray*)selectedContacts;
- (NSArray*)phonesOfSelectedContacts;
- (NSArray*)emailsOfSelectedContacts;

@end

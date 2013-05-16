//
//  BCPhoneNumberTableViewDelegate.h
//  BetterContacts
//
//  Created by Maxime de Chalendar on 06/05/13.
//  Copyright (c) 2013 Maxime de Chalendar. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BCContact;
@class BCModalListViewController;

@interface BCModalTableViewDelegate : NSObject < UITableViewDataSource,
UITableViewDelegate > {
    BCContact * _contact;
    BCModalListViewController *_controller;
}

- (id)initWithContact:(BCContact *)contact;

- (void)setController:(BCModalListViewController *)controller;

@end

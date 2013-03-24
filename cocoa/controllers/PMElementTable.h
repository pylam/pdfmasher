/* 
Copyright 2013 Hardcoded Software (http://www.hardcoded.net)

This software is licensed under the "GPL v3" License as described in the "LICENSE" file, 
which should be included with this package. The terms are also available at 
http://www.hardcoded.net/licenses/gplv3_license
*/

#import <Cocoa/Cocoa.h>
#import "PyElementTable.h"
#import "HSTable.h"
#import "PMElementTableView.h"

@interface PMElementTable : HSTable {}
- (id)initWithPyRef:(PyObject *)aPyRef tableView:(PMElementTableView *)aTableView;
- (void)initializeColumns;
- (PyElementTable *)model;
@end
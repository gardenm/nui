//
//  UITableView+NUI.h
//  Pods
//
//  Created by Tobias Heinicke on 19.06.13.
//
//

#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import "NUIRenderer.h"
#import "NUIOrientationObserver.h"

@interface UITableView (NUI) <NUIOrientationObserver>

@end

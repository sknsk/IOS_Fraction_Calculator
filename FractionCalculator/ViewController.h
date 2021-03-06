//
//  ViewController.h
//  FractionCalculator
//
//  Created by MF839-019 on 2016. 5. 16..
//  Copyright © 2016년 MF839-019. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *display;

- (IBAction)clickDigit:(id)sender;
- (IBAction)clickOver:(id)sender;
- (IBAction)clickClear:(id)sender;
- (IBAction)clickEquls:(id)sender;
- (IBAction)clickPlus:(id)sender;
- (IBAction)clickMinus:(id)sender;
- (IBAction)clickMultiply:(id)sender;
- (IBAction)clickDivide:(id)sender;

- (void) processDigit:(int)digit;
- (void) processOp:(char)theOp;
- (void) storeFracPart;

@end


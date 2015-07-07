//
//  SimpleCalculatorViewController.h
//  SimpleCalculator
//
//  Created by Basilio García Castillo on 3/15/14.
//  Copyright (c) 2014 Basilio García. All rights reserved.
//

#import <UIKit/UIKit.h>
int operation;
double displayNumber;
double resultNumber;
BOOL isDecimal;
@interface SimpleCalculatorViewController : UIViewController{
    
    IBOutlet UILabel *result;
}
- (void) setResultWithNumber:(int)theNumber;
- (void) operationWithNumber:(int)theNumber;
- (IBAction)AC:(id)sender;
- (IBAction)plus_minus:(id)sender;
- (IBAction)divide:(id)sender;
- (IBAction)add:(id)sender;
- (IBAction)substract:(id)sender;
- (IBAction)multiply:(id)sender;
- (IBAction)equals:(id)sender;
- (IBAction)dot:(id)sender;
- (IBAction)seven:(id)sender;
- (IBAction)eight:(id)sender;
- (IBAction)nine:(id)sender;
- (IBAction)six:(id)sender;
- (IBAction)five:(id)sender;
- (IBAction)four:(id)sender;
- (IBAction)three:(id)sender;
- (IBAction)two:(id)sender;
- (IBAction)one:(id)sender;
- (IBAction)zero:(id)sender;

@end

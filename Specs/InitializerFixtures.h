#import <Foundation/Foundation.h>
#import "SpecHelper.h"
#import "Fixtures.h"

@interface ViewController : NSObject
@property (nonatomic, retain) Car *car;
@property (nonatomic, copy) NSString *nibName;
@property (nonatomic, copy) NSBundle *bundle;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil;
@end

@interface ConfigurableCar : NSObject
@property (nonatomic, retain) Car *car;
@property (nonatomic, retain) Engine *engine;

@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSNumber *horsePower;
@property (nonatomic, copy) NSNumber *year;

- (id)initWithModel:(NSString *)model horsePower:(NSNumber *)horsePower andYear:(NSNumber *)year;
@end

@interface BadInitializer : NSObject
@end

@interface ServiceWithInitializerDependencies : NSObject
@property (readonly, assign) BOOL hasEngine;

- (id) initWithEngine:(Engine *)engine;

@end


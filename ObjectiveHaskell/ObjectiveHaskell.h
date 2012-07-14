//
//  ObjectiveHaskell.h
//  ObjectiveHaskell
//
//  Created by Justin Spahr-Summers on 2012-07-13.
//  Released into the public domain.
//

#import "HsFFI.h"

// This makes Haskell functions compatible with ARC, but will effectively
// prevent ever passing "primitive" C pointers to or from Haskell
#define HsPtr id

//
//  main.c
//  study
//
//  Created by jkl on 2/24/16.
//  Copyright © 2016 jkl. All rights reserved.
//

#include <stdio.h>
#include "Complex.h"

int main(int argc, const char * argv[]) {
    struct Complex z = constructor(10, 2);
//    printf("complex:%f %f\n", realPart(z), imgPart(z));
    char str[10];
    toString(z, str);
    printf("c:%s", str);
    return 0;
}

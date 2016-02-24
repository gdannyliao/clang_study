//
//  Complex.h
//  study
//
//  Created by jkl on 2/24/16.
//  Copyright © 2016 jkl. All rights reserved.
//

#ifndef Complex_h
#define Complex_h
#include <string.h>
#include <stdlib.h>

struct Complex {
    double x,y;
};

struct Complex constructor(double x, double y) {
    struct Complex z;
    z.x = x;
    z.y = y;
    return z;
}

double realPart(struct Complex z) {
    return z.x;
}

double imgPart(struct Complex z) {
    return z.y;
}

char* toString(struct Complex z) {
    char* real, *img;
    //FIXME 使用null代替
    int signReal, signImg, digiReal, digiImg;
    real = fcvt(z.x, 2, &digiReal, &signReal);
    img = fcvt(z.y, 2, &digiImg, &signImg);
    char res[10];
    strcpy(res, real);
    strcat(res, "  ");
    strcat(res, img);
    puts(res);
    return res;
}

#endif /* Complex_h */

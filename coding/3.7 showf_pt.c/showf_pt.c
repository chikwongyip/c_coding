//
//  showf_pt.c
//  coding
//
//  Created by ChiKwong Yip on 7/6/2020.
//  Copyright © 2020 ChiKwong Yip. All rights reserved.
//

#include <stdio.h>
int showf(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    printf("%f can be written %e\n",aboat,aboat);
    printf("%f can be wirtten %e\n",abet,abet);
    printf("%Lf can be written %Le",dip,dip);
    return 0;
}


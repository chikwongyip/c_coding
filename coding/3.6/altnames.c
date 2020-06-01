//
//  altnames.c
//  coding
//
//  Created by ChiKwong Yip on 1/6/2020.
//  Copyright © 2020 ChiKwong Yip. All rights reserved.
//

#include <stdio.h>
#include <inttypes.h>
int altnames(void)
{
    int32_t me32;
    me32 = 45933945;
    printf("first assume int32_t is int:");
    printf("me32 = %d\n",me32);
    printf("next let's not make any assumptions.\n");
    printf("Instead use a \"macro\" from inttypes.h");
    printf("me32 = %" PRId32 "\n",me32);
    return  0;
}

//
//  talkback.c
//  coding
//
//  Created by ChiKwong Yip on 9/6/2020.
//  Copyright © 2020 ChiKwong Yip. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define  DENSITY 62.4
int talkback()
{
    float weight,volume;
    int size,letters;
    char name[40];
    printf("Hi! What's your first name?\n");
    scanf("%s",name);
    printf("%s,What's your weight in pounds?\n",name);
    scanf("%f",&weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well,%s,your volume is %2.2f cubic feet.\n",name,volume);
    printf("and we have %d bytes to store it.\n",size);
    return 0;
}


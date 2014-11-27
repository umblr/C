//
//  main.c
//  sample11-a
//
//  Created by UMBLR on 2014/11/27.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

typedef struct car{
    int num;
    double gas;
}car;

int main(void)
{
    car cars[3];
    int i;
    
    cars[0].num=1234;cars[0].gas=25.5;
    cars[1].num=4567;cars[1].gas=52.2;
    cars[2].num=7890;cars[2].gas=20.5;
    
    for (i=0; i<3; i++) {
        printf("車のNo.は%d:ガソリン量は%fです\n",cars[i].num,cars[i].gas);
    }
    return 0;
}
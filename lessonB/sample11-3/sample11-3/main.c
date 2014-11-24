//
//  main.c
//  sample11-3
//
//  Created by UMBLR on 2014/11/18.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

typedef struct car{
    int num;
    double gas;
}car;


int main(void)
{
    car car1;
    
    car1.num=1234;
    car1.gas=25.5;
    
    printf("車のNo.は%d 燃料は%f\n",car1.num,car1.gas);
    
    return 0;
}
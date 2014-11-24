//
//  main.c
//  sample11-5
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
    car car1={1234,25.5};
    car car2={4567,52.2};
    
    printf("car1の車のNo.は%d 燃料は%f\n",car1.num,car1.gas);
    printf("car2の車のNo.は%d 燃料は%f\n",car2.num,car2.gas);
    
    car2=car1;
    
    printf("car1をcar2に代入しました\n");
    printf("車のNo.は%d 燃料は%f\n",car2.num,car2.gas);
    
    return 0;
}
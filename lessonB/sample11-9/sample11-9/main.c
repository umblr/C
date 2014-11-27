//
//  main.c
//  sample11-9
//
//  Created by UMBLR on 2014/11/26.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

typedef struct car{
    int num;
    double gas;
}car;

void show(car *pC);

int main(void)
{
    car car1={0,0.0};
    
    printf("No.を入力してください\n");
    scanf("%d",&car1.num);
    
    
    printf("ガソリン量を入力してください\n");
    scanf("%lf",&car1.gas);
    
    show(&car1);
    
    return 0;
    
}

void show(car *pC)
{
    printf("車のNo.は%d:ガソリン量は%fです\n",pC->num,pC->gas);
}
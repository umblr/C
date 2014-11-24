//
//  main.c
//  sample11-2
//
//  Created by UMBLR on 2014/11/18.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

struct car{
    int num;
    double gas;
};

int main(void)
{
    struct car car1;
    
    printf("No.を入力してください\n");
    scanf("%d",&car1.num);
    
    printf("燃料を入力してください\n");
    scanf("%lf",&car1.gas);
    
    printf("車のNo.は%d 燃料は%f\n",car1.num,car1.gas);
    
    return 0;
}
//
//  main.c
//  sample9-5
//
//  Created by UMBLR on 2014/11/02.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int a;
    int *pA;
    
    a=5;
    pA=&a;
    
    printf("変数aの値は%dです\n",a);
    *pA=50;
    
    printf("*pAに50を代入しました\n");
    printf("変数aの値は%dです\n",a);
    
    return 0;
}
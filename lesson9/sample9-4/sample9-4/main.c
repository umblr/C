//
//  main.c
//  sample9-4
//
//  Created by UMBLR on 2014/10/31.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int a,b;
    int *pA;
    
    a=5;
    b=10;
    
    pA=&a;
    
    printf("変数aの値は%dです\n",a);
    printf("変数aのアドレスは%pです\n",&a);
    printf("*pAの値は%dです\n",*pA);
    
    pA=&b;
    
    printf("変数bの値は%dです\n",a);
    printf("変数bのアドレスは%pです\n",&a);
    printf("*pAの値は%dです\n",*pA);
    
    return 0;
}
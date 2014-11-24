//
//  main.c
//  sample9-3
//
//  Created by UMBLR on 2014/10/31.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a;
    int *pA;
    
    a=5;
    pA=&a;
    
    printf("変数aの値は%dです\n",a);
    printf("変数aのアドレスは%pです\n",&a);
    printf("ポインタpAの値は%pです\n",pA);
    printf("*pAの値は%dです\n",*pA);
    
    return 0;
}
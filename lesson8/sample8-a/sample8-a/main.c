//
//  main.c
//  sample8-a
//
//  Created by UMBLR on 2014/10/23.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int a=0;

void func(void)
{
    int c=2;
    
    printf("func関数ではaとcが使えます\n");
    printf("変数aの値は%dです\n",a);
    printf("変数cの値は%dです\n",c);
}

int main(void)
{
    int b=1;
    
    printf("main関数ではaとbが使えます\n");
    printf("変数aの値は%dです\n",a);
    printf("変数bの値は%dです\n",b);
    
    func();
    
    return 0;
}
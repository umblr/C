//
//  main.c
//  sample8-b
//
//  Created by UMBLR on 2014/10/24.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int a=0;

void func(void)
{
    int b=0;
    static int c=0;
    
    printf("変数a:%d,変数b:%d,変数c:%d\n",a,b,c);
    
    a++;
    b++;
    c++;
}

int main(void)
{
    int i;
    
    for (i=0; i<5; i++) {
        func();
    }
    
    return 0;
}
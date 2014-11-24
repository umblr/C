//
//  main.c
//  Fibonacci Number
//
//  Created by UMBLR on 2014/11/24.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int fibonacci(int n);

int main(void)
{
    int n;
    
    printf("入力された数までのフィボナッチ数を出力します:");
    
    scanf("%d",&n);
    
    printf("%d\n",fibonacci(n));
    
    return 0;
}

int fibonacci(int n)
{
    if(n==1 || n==2)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
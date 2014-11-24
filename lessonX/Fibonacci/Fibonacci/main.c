//
//  main.c
//  Fibonacci
//
//  Created by UMBLR on 2014/11/24.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int a,b=0,c=1,i,n;
    
    printf("入力された数値までのフィボナッチ数列を作成します\n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        printf("%d ", b);
        a = b+c;
        b = c;
        c = a;
    }
    printf("\n");
    return 0;
}
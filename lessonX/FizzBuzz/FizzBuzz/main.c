//
//  main.c
//  FizzBuzz
//
//  Created by UMBLR on 2014/11/30.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int i;
    int n;
    
    printf("Please Puts No.\n");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        if (i%3==0 && i%5==0) {
            printf("FizzBuzz ");
        } else if (i%3==0){
            printf("Fizz ");
        } else if (i%5==0){
            printf("Buzz ");
        } else {
            printf("%d ",i);
        }
    }
        return 0;
}
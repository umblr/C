//
//  main.c
//  sample4-3
//
//  Created by UMBLR on 2014/10/16.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int num1,num2;
    
    printf("整数1を入力してください\n");
    
    scanf("%d",&num1);
    
    printf("整数2を入力してください\n");
    
    scanf("%d",&num2);
    
    printf("加算の結果は%dです\n",num1+num2);
    
    return 0;
}
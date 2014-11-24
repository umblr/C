//
//  main.c
//  sample5-3
//
//  Created by UMBLR on 2014/10/18.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int res;
    
    printf("整数を入力\n");
    
    scanf("%d",&res);
    
    if (res==1)
    {
        printf("1が入力されました\n");
    }
    
    else
    {
        printf("1以外が入力されました\n");
    }
    
    return 0;
}
//
//  main.c
//  sample5-4
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
    
    else if (res==2)
    {
        printf("2が入力されました\n");
    }
    
    else
    {
        printf("1か2を入力してくだしあ\n");
    }
    
    return 0;
}
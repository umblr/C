//
//  main.c
//  sample5-5
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
    
    switch (res)
    {
        case 1:
            printf("1が入力されました\n");
            break;
        case 2:
            printf("2が入力されました\n");
            break;
        default:
            printf("1か2を入力してくだしあ\n");
            break;
    }
    
    return 0;
}
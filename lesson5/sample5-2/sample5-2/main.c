//
//  main.c
//  sample5-2
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
        printf("1を選択しました\n");
    }
    printf("処理を終了\n");
    
    return 0;
}
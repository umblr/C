//
//  main.c
//  sample6-c
//
//  Created by UMBLR on 2014/10/20.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int res;
    int i;
    
    printf("何番目の処理を飛ばしますか?(1~10)\n");
    scanf("%d",&res);
    
    for (i=1; i<=10; i++)
    {
        if (i==res)
            continue;
        printf("%d番目の処理です\n",i);
    }
    return 0;
}
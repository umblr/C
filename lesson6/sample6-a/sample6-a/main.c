//
//  main.c
//  sample6-a
//
//  Created by UMBLR on 2014/10/20.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int res;
    int i;
    
    printf("何番目でLoopを中止しますか?(1~10)\n");
    
    scanf("%d",&res);
    
    for (i=1; i<=10; i++)
    {
        printf("%d番目の処理です\n",i);
        if (i==res)
            break;
    }
    return 0;
}
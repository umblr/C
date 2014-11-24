//
//  main.c
//  sample6-3
//
//  Created by UMBLR on 2014/10/18.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int num;
    int i;
    
    printf("何回出力しますか?\n");
    scanf("%d",&num);
    
    for (i=1;i<=num;i++)
    {
        printf("*");
    }
    printf("\n");
    
    return 0;
}
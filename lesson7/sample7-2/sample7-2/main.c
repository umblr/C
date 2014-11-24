//
//  main.c
//  sample7-2
//
//  Created by UMBLR on 2014/10/21.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int test[5];
    int i,j;
    
    printf("5人の点数を入力\n");
    
    for (i=0; i<5; i++)
    {
        scanf("%d",&test[i]);
    }
    
    for (j=0; j<5; j++)
    {
        printf("%d番目の人の点数は%dです\n",j+1,test[j]);
    }
    
    return 0;
}
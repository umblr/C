//
//  main.c
//  sample7-3
//
//  Created by UMBLR on 2014/10/20.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>
#define num 5

int main(void)
{
    int test[num]={80,60,22,50,75};
    int i;
    
    for (i=0; i<num; i++)
    {
        printf("%d番目の人の点数は%dです\n",i+1,test[i]);
    }
    
    return 0;
}
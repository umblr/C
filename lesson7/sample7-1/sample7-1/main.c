//
//  main.c
//  sample7-1
//
//  Created by UMBLR on 2014/10/20.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int test[5];
    int i;
    
    test[0]=80;
    test[1]=60;
    test[2]=22;
    test[3]=50;
    test[4]=75;
    
    for (i=0; i<5; i++)
    {
        printf("%d番目の人の点数は%dです\n",i+1,test[i]);
    }
    
    return 0;
}
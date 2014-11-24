//
//  main.c
//  sample7-5
//
//  Created by UMBLR on 2014/10/21.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>
#define num 5

int main(void)
{
    int test[num];
    int tmp;
    int i,j,s,t;
    
    printf("%d人の点数を入力\n",num);
    
    for (i=0; i<num; i++)
    {
        scanf("%d",&test[i]);
    }
    
    for (s=0; s<num-1; s++)
    {
        for (t=s+1; t<num; t++)
        {
            if (test[t]>test[s])
            {
                tmp=test[t];
                test[t]=test[s];
                test[s]=tmp;
            }
        }
    }
    
    for (j=0; j<num; j++)
    {
        printf("%d番目の人の点数は%dです\n",j+1,test[j]);
    }
    
    return 0;
}
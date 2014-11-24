//
//  main.c
//  sample10-7
//
//  Created by UMBLR on 2014/11/09.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

double avg(int *pT);

int main(void)
{
    int test[5];
    int i;
    double ans;
    
    printf("5つの点数を入力\n");
    
    for (i=0; i<5; i++) {
        scanf("%d",&test[i]);
    }
    
    ans=avg(test);
    
    printf("5つの平均点は%lf点です\n",ans);
    
    return 0;
}

double avg(int *pT)
{
    int i;
    double sum;
    
    sum=0.0;
    
    for (i=0; i<5; i++) {
        sum+=pT[i];
    }
    
    return sum/5;
}
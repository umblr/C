//
//  main.c
//  sample10-g
//
//  Created by UMBLR on 2014/11/16.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int max(int x,int y);

int main(void)
{
    int num1,num2,ans;
    
    int (*pM)(int x,int y);
    
    pM=max;
    
    printf("1番目の数値を入力してください\n");
    scanf("%d",&num1);
    
    printf("2番目の数値を入力してください\n");
    scanf("%d",&num2);
    s
    ans=(*pM)(num1,num2);
    
    printf("最大値は%dです\n",ans);
    
    return 0;
}

int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
//
//  main.c
//  sample8-7
//
//  Created by UMBLR on 2014/10/23.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int sum(int x,int y)
{
    return x+y;
}

int main(void)
{
    int num1,num2,ans;
    
    printf("一番目の整数を入力してください\n");
    scanf("%d",&num1);
    
    printf("二番目の整数を入力してください\n");
    scanf("%d",&num2);
    
    ans=sum(num1,num2);
    
    printf("合計は%dです\n",ans);
}
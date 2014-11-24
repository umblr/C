//
//  main.c
//  sample8-9
//
//  Created by UMBLR on 2014/10/23.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

#define max(x,y)(x>y?x:y)

int main(void)
{
    int num1,num2,ans;
    
    printf("1番目の整数を入力\n");
    scanf("%d",&num1);
    
    printf("2番目の整数を入力\n");
    scanf("%d",&num2);

    ans=max(num1,num2);
    
    printf("最大値は%dです\n",ans);
    
    return 0;
}


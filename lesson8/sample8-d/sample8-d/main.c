//
//  main.c
//  sample8-d
//
//  Created by UMBLR on 2014/10/25.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>
#include "myfunc.h"

int main(void)
{
    int num1,num2,ans;
    
    printf("一番目の整数を入力してください\n");
    scanf("%d",&num1);
    
    printf("二番目の整数を入力してください\n");
    scanf("%d",&num2);
    
    ans=max(num1,num2);
    
    printf("最大値は%dです\n",ans);
    
    return 0;
}
//
//  main.c
//  sample8-6
//
//  Created by UMBLR on 2014/10/23.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int buy(int x,int y)
{
    int z;
    
    printf("%d万円と%d万円の商品を購入しました\n",x,y);
    
    z=x+y;
    
    return z;
}

int main(void)
{
    int num1,num2,sum;
    
    printf("一つ目はいくらの品を買いますか\n");
    scanf("%d",&num1);
    
    printf("二つ目はいくらの品を買いますか\n");
    scanf("%d",&num2);
    
    sum=buy(num1,num2);
    
    printf("合計で%d万円で購入しました\n",sum);
    
    return 0;
}
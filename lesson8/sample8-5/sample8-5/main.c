//
//  main.c
//  sample8-5
//
//  Created by UMBLR on 2014/10/23.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

void buy(int x,int y)
{
    printf("%d万円と%d万円の商品を購入しました\n",x,y);
}

int main(void)
{
    int num1,num2;
    
    printf("一つ目はいくらの品を買いますか\n");
    scanf("%d",&num1);
    
    printf("二つ目はいくらの品を買いますか\n");
    scanf("%d",&num2);
    
    buy(num1,num2);
    
    return 0;
}
//
//  main.c
//  sample8-4
//
//  Created by UMBLR on 2014/10/23.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

void buy(int x)
{
    printf("%d万円の商品を購入しました\n",x);
}

int main(void)
{
    int num;
    
    printf("一つ目はいくらの品を買いますか\n");
    scanf("%d",&num);
    
    buy(num);
    
    printf("二つ目はいくらの品を買いますか\n");
    scanf("%d",&num);
    
    buy(num);
    
    return 0;
}
//
//  main.c
//  sample8-3
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
    buy(20);
    printf("もう一度購入します\n");
    buy(50);
    
    return 0;
}

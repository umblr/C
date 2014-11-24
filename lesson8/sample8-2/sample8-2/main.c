//
//  main.c
//  sample8-2
//
//  Created by UMBLR on 2014/10/23.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

void buy(void)
{
    printf("購入しました\n");
}

int main(void)
{
    buy();
    printf("もう一度購入します\n");
    buy();
    return 0;
}

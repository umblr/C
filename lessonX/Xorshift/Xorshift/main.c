//
//  main.c
//  Xorshift
//
//  Created by UMBLR on 2014/11/27.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include<stdio.h>

unsigned int xor128(void){
    static unsigned int x=123456789;
    static unsigned int y=362436069;
    static unsigned int z=521288629;
    static unsigned int w=88675123;
    unsigned int t;
    
    t=x^(x<<11);
    x=y;y=z;z=w;
    return w=(w^(w>>19))^(t^(t>>8));
}

int main(void){
    unsigned i;
    int count,limit;
    
    printf("出力する個数を入力:");
    scanf("%d",&count);
    
    printf("擬似乱数の最大値を入力:");
    scanf("%d",&limit);limit++;
    
    for(i=0;i<count;i++)
        printf("%d ",xor128()%limit);
    printf("\n");
    return 0;
}
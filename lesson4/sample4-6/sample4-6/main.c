//
//  main.c
//  sample4-6
//
//  Created by UMBLR on 2014/10/17.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int sum=0;
    int num=0;
    
    printf("1つ目の整数を入力してください\n");
    scanf("%d",&num);
    sum+=num;
    
    printf("2つ目の整数を入力してください\n");
    scanf("%d",&num);
    sum+=num;
    
    printf("3つ目の整数を入力してください\n");
    scanf("%d",&num);
    sum+=num;
    
    printf("3つの数の合計は%dです\n",sum);
    
    return 0;
}
//
//  main.c
//  sample11-c
//
//  Created by UMBLR on 2014/11/27.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

typedef union year{
    int ad;
    int gengo;
}Year;

int main(void)
{
    Year myyear;
    int a,g;
    
    printf("西暦を入力してください\n");
    scanf("%d",&a);
    
    myyear.ad=a;
    
    printf("西暦は%dです\n",myyear.ad);
    printf("元号は%dです\n",myyear.gengo);
    
    printf("元号を入力してください\n");
    scanf("%d",&g);
    
    myyear.gengo=g;
    
    printf("元号は%dです\n",myyear.gengo);
    printf("西暦は%dです\n",myyear.ad);
    
    return 0;
}
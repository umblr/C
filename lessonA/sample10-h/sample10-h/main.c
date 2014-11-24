//
//  main.c
//  sample10-h
//
//  Created by UMBLR on 2014/11/18.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

void show0(void);
void show1(void);
void show2(void);

int main(void)
{
    void (*pM[3])(void);
    int num;
    
    pM[0]=show0;
    pM[1]=show1;
    pM[2]=show2;

    printf("項目を選んでください(0:車 1:電車 2:飛行機)\n");
    scanf("%d",&num);
    
    if (0<=num&&num<=2)
        (*pM[num])();
        
        return 0;
    }
    
    void show0(void)
    {
        printf("車\n");
    }
    void show1(void)
    {
        printf("電車\n");
    }
    void show2(void)
    {
        printf("飛行機\n");
    }

//
//  main.c
//  4 Arithmetic
//
//  Created by UMBLR on 2014/12/11.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

void input(void);

void show0(void);
void show1(void);
void show2(void);
void show3(void);

int main(void)
{
    void (*pM[4])(void);
    
    int num;
    
    pM[0]=show0;
    pM[1]=show1;
    pM[2]=show2;
    pM[3]=show3;
    
    printf("(0:add 1:sub 2:mul 3:div)\n");
    scanf("%d", &num);
    
    if(0<=num && num<=3)
        (*pM[num])();
    
    return 0;
}

int x,y;

void input(void)
{
    printf("Enter first number\n");
    scanf("%d", &x);
    
    printf("Enter second number\n");
    scanf("%d", &y);
}

void show0(void)
{
    input();
    printf("add result is %d\n",x+y);
}

void show1(void)
{
    input();
    printf("sub result is %d\n",x-y);
}

void show2(void)
{
    input();
    printf("mul result is %d\n",x*y);
}

void show3(void)
{
    input();
    printf("div result is %d\n",x/y);
}
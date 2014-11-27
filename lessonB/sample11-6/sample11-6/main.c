//
//  main.c
//  sample11-6
//
//  Created by UMBLR on 2014/11/24.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

typedef struct car
{
    int num;
    double gas;
}car;

int main(void)
{
    printf("int型のサイズは%ldバイトです\n",sizeof(int));
    printf("double型のサイズは%ldバイトです\n",sizeof(double));
    printf("構造体struct car型のサイズは%ldバイトです\n",sizeof(car));
    printf("構造体struct car型へのポインタのサイズは%ldバイトです\n",sizeof(car*));
    
    return 0;
}
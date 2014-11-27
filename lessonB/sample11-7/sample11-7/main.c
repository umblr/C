//
//  main.c
//  sample11-7
//
//  Created by UMBLR on 2014/11/26.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

typedef struct car1{
    int num;
    double gas;
    unsigned int tire:3;
    unsigned int roof:1;
    unsigned int color:4;
}car1;

typedef struct car2{
    int num;
    double gas;
    unsigned int tire;
    unsigned int roof;
    unsigned int color;
}car2;

int main(void)
{
    printf("ビットフィールドを使った構造体のサイズは%ldバイトです\n",sizeof(car1));
    printf("ビットフィールドを使わない構造体のサイズは%ldバイトです\n",sizeof(car2));
    return 0;
}


//
//  main.c
//  sample10-4
//
//  Created by UMBLR on 2014/11/02.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int test[5]={13,45,64,75,32};
    
    printf("test[0]の値は%dです\n",test[0]);
    printf("test[0]のアドレスは%pです\n",&test[0]);
    printf("testの値は%pです\n",test);
    printf("test+1の値は%pです\n",test+1);
    printf("*(test+1)の値は%dです\n",*(test+1));
    
    return 0;
}
//
//  main.c
//  sample10-d
//
//  Created by UMBLR on 2014/11/15.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str0[20];
    char str1[10];
    char str2[10];
    
    strcpy(str1, "Hello");
    strcpy(str2, "GoodBye");
    strcpy(str0, str1);
    strcat(str0, str2);
    
    printf("配列str1は%sです\n",str1);
    printf("配列str2は%sです\n",str2);
    printf("連結すると%sです\n",str0);
    
    return 0;
}
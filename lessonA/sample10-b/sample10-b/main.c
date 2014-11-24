//
//  main.c
//  sample10-b
//
//  Created by UMBLR on 2014/11/14.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    
    printf("文字列を英数字で入力\n");
    
    scanf("%s",str);
    
    printf("文字列の長さは%ldです\n",strlen(str));
    
    return 0;
}
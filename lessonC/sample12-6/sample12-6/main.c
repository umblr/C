//
//  main.c
//  sample12-6
//
//  Created by UMBLR on 2014/12/04.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    char str[100];
    
    printf("文字列を入力してください\n");
    gets(str);
    
    printf("入力した文字列は%sです\n",str);
    return 0;
}

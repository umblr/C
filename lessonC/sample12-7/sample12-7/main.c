//
//  main.c
//  sample12-7
//
//  Created by UMBLR on 2014/12/04.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int ch;
    
    printf("文字を続けて入力してください\n");
    
    while ((ch=getchar()) != EOF) {
        putchar(ch);
    }
    return 0;
}

//
//  main.c
//  sample7-9
//
//  Created by UMBLR on 2014/10/21.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    char str[]="Hello";
    int i;
    
    printf("Hello\n");
    
    for (i=0; str[i]!='\0'; i++) {
        printf("%c*",str[i]);
    }
    
    printf("\n");
    
    return 0;
}

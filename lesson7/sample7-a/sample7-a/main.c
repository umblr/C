//
//  main.c
//  sample7-a
//
//  Created by UMBLR on 2014/10/22.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    char str[]="Hello";
    int i=0;
    
    printf("Hello\n");
    
    while (str[i]) {
        printf("%c*",str[i]);
        i++;
    }

    printf("\n");
    
    return 0;
}

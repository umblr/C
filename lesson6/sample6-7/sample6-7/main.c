//
//  main.c
//  sample6-7
//
//  Created by UMBLR on 2014/10/19.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int i=1;
    
    do
    {
        printf("%d番目の繰り返しです\n",i);
        i++;
    }
    while (i<=5);
    
    printf("繰り返しが終わりました\n");
    return 0;
}

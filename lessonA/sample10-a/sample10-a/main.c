//
//  main.c
//  sample10-a
//
//  Created by UMBLR on 2014/11/14.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    
    char *str[3]={"Hello","Goodbye","ThankYou"};
    int i;
    
    for (i=0; i<3; i++) {
        printf("文字列は%sです\n",str[i]);
    }
    
    return 0;
}
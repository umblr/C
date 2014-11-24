//
//  main.c
//  sample7-7
//
//  Created by UMBLR on 2014/10/21.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    char str[6];
    
    str[0]='H';
    str[1]='e';
    str[2]='l';
    str[3]='l';
    str[4]='o';
    str[5]='\0';
    
    printf("%sは文字列\n",str);
    
    return 0;
}
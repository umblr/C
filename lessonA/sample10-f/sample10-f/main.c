//
//  main.c
//  sample10-f
//
//  Created by UMBLR on 2014/11/16.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str;
    int num,i;
    
    printf("何文字のaを用意しますか\n");
    scanf("%d",&num);
    
    str=(char*)malloc(sizeof(char)*(num+1));
    
    if (!str) {
        printf("メモリが確保できませんでした\n");
        return 1;
    }
    
    for (i=0; i<num; i++) {
        *(str+i)='a';
    }
    
    *(str+num)='\0';
    
    printf("%sを用意しました\n",str);
    
    free(str);
    
    return 0;
}
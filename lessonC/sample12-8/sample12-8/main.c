//
//  main.c
//  sample12-8
//
//  Created by UMBLR on 2014/12/04.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    FILE *fp;
    
    fp = fopen("test1.txt", "w");
    
    if (fp == NULL) {
        printf("ファイルをオープンできませんでした\n");
        return 1;
    } else {
        printf("ファイルをオープンしました\n");
    }
    
    fclose(fp);
    printf("ファイルをクローズしました\n");
    return 0;
}

//
//  main.c
//  sample12-9
//
//  Created by UMBLR on 2014/12/06.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    FILE *fp;
    
    fp=fopen("test1.txt", "w");
    
    if (fp==NULL)
    {
        printf("ファイルをオープンできませんでした\n");
        return 1;
        
    } else {
        printf("ファイルをオープンしました\n");
    }
    
    fputs("Hello!\n", fp);
    fputs("Goodbye!\n", fp);
    
    printf("ファイルに書き込みました\n");
    
    fclose(fp);
    
    printf("ファイルをクローズしました\n");
    
    return 0;
}
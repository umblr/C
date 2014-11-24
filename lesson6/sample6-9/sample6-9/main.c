//
//  main.c
//  sample6-9
//
//  Created by UMBLR on 2014/10/19.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int i,j,ch;
    
    ch=0;
    
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if (ch==0)
            {
                printf("*");
                ch=1;
            }
            else
            {
                printf("_");
                ch=0;
            }
        }
        printf("\n");
    }
    
    return 0;
}

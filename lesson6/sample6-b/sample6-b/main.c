//
//  main.c
//  sample6-b
//
//  Created by UMBLR on 2014/10/20.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int res;
    
    printf("成績を入力(1~5)\n");
    scanf("%d",&res);
    
    switch (res)
    {
        case 1:
        case 2:
            printf("もう少し頑張りましょう\n");
            break;
            
        case 3:
        case 4:
            printf("この調子で頑張りましょう\n");
            break;
            
        case 5:
            printf("大変優秀です\n");
            break;
            
        default:
            printf("1~5までの数字を入力\n");
            break;
    }
    
    return 0;
}

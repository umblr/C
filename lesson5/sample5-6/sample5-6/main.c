//
//  main.c
//  sample5-6
//
//  Created by UMBLR on 2014/10/18.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int res;
    
    printf("性別を判定します\n");
    printf("MまたはWを入力してください\n");
    
    res=getchar();
    
    if (res=='M'||res=='m')
    {
        printf("貴方は男性ですね\n");
    }
    else if (res=='W'||res=='w')
    {
        printf("貴方は女性ですね\n");
    }
    else
    {
        printf("MまたはWを入力してください!\n");
    }
    
    return 0;
}
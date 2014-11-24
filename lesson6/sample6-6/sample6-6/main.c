//
//  main.c
//  sample6-6
//
//  Created by UMBLR on 2014/10/19.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int num=1;
    
    while (num)
    {
        printf("整数を入力してください(0で終了)\n");
        
        scanf("%d",&num);
        
        printf("%dが入力されました\n",num);
    }
    
    printf("繰り返しが終わりました\n");
    
    return 0;
}

//
//  main.c
//  sample12-3
//
//  Created by UMBLR on 2014/12/04.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    double num;
    
    printf("少数を入力してください\n");
    scanf("%lf",&num);
    
    printf("小数点以下3桁で出力すると%.3fです\n",num);
    
    return 0;
}

//
//  main.c
//  sample12-1
//
//  Created by UMBLR on 2014/12/03.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i;
    double d;
    char str[100];
    
    printf("整数値を入力してください\n");
    scanf("%d",&i);

    printf("少数値を入力してください\n");
    scanf("%lf",&d);
    
    printf("文字列を入力してください\n");
    scanf("%s",str);
    
    printf("入力した整数値は%dです\n",i);
    printf("入力した少数値は%lfです\n",d);
    printf("入力した文字列は%sです\n",str);
    
    return 0;
}

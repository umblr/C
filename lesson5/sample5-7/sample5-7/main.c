//
//  main.c
//  sample5-7
//
//  Created by UMBLR on 2014/10/18.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int res;
    char ans;
    
    printf("何番目を選びますか?\n");
    printf("整数を入力してください\n");
    
    scanf("%d",&res);
    
    ans=(res==1)?'A':'B';
    
    
    printf("%cコースを選択しました\n",ans);
    
    return 0;
}
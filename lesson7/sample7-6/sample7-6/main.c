//
//  main.c
//  sample7-6
//
//  Created by UMBLR on 2014/10/21.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>
#define sub 2
#define num 5

int main(void)
{
    int test[sub][num];
    int i;
    //jpn
    test[0][0]=80;
    test[0][1]=60;
    test[0][2]=22;
    test[0][3]=50;
    test[0][4]=75;
    //math
    test[1][0]=90;
    test[1][1]=55;
    test[1][2]=68;
    test[1][3]=72;
    test[1][4]=58;
    
    printf("国語:\n");
    
    for (i=0; i<num; i++) {
        printf("%d番目の人の国語の点数は%dです\n",i+1,test[0][i]);
    }
    
    printf("数学:\n");
    
    for (i=0; i<num; i++) {
        printf("%d番目の人の数学の点数は%dです\n",i+1,test[1][i]);
    }
    
    return 0;
}

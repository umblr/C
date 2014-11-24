//
//  main.c
//  PRIME No.
//
//  Created by UMBLR on 2014/11/22.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

int prime(int n);

int main(void)
{
    int n;
    
    printf("自然数を入力してください：");
    
    scanf("%d",&n);
    
    printf("%d以下の素数の個数は%d個です\n",n,prime(n));
    
    return 0;
}

int prime(int n)
{
    int i,j,div,count;
    
    count=0;
    
    for (i=1;i<=n;i++)
    {
        div=0;
        
        for(j=1;j<=i;j++){
            if((i%j)==0){
                div++;
            }
        }
        
        if(div==2){
            printf("%d ",i);
            count++;
        }
    }
    
    printf("\n");
    
    return count;
}
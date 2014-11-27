//
//  main.c
//  sample11-b
//
//  Created by UMBLR on 2014/11/27.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

typedef struct car{
    int num;
    double gas;
    struct car *next;
}car;

int main(void)
{
    car car0;
    car car1;
    car car2;
    car *pcar;
    
    car0.num=1234;car0.gas=25.5;
    car1.num=4567;car1.gas=52.2;
    car2.num=7890;car2.gas=20.5;
    
    car0.next=&car1;
    car1.next=&car2;
    car2.next=NULL;
    
    for (pcar=&car0; pcar!=NULL; pcar=pcar->next) {
        printf("車のNo.は%d:ガソリン量は%fです\n",pcar->num,pcar->gas);
    }
    return 0;
}
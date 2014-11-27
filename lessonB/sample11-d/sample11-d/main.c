//
//  main.c
//  sample11-d
//
//  Created by UMBLR on 2014/11/27.
//  Copyright (c) 2014年 raus0. All rights reserved.
//

#include <stdio.h>

typedef enum week{sun,mon,tue,wed,thu,fri,sat}week;

int main(void)
{
    week w;
    w=sun;
    
    switch (w) {
        case sun:printf("月曜です\n");break;
        case mon:printf("月曜です\n");break;
        case tue:printf("月曜です\n");break;
        case wed:printf("月曜です\n");break;
        case thu:printf("月曜です\n");break;
        case fri:printf("月曜です\n");break;
        case sat:printf("月曜です\n");break;
            
        default:printf("何曜日だか分かりません\n"); break;
    }
    return 0;
}
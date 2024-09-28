//
//  text1_1.c
//  practice
//
//  Created by 왕성훈 on 4/12/24.
//

#include "text1_1.h"

int med3(int a, int b, int c){
    if(a >= b)
        if(b >= c)
            return b;
        else if(a <= c)
            return a;
        else
            return c;
    else if(a > c)
        return a;
    else if(b > c)
        return c;
    else
        return b;
}

int main(void)
{
    int a, b, c;
    
    printf("enter three numbers\n");
    printf("a : "); scanf("%d", &a);
    printf("b : "); scanf("%d", &b);
    printf("c : "); scanf("%d", &c);
    
    printf("median is %d.\n", med3(a, b, c));
    
    return 0;
}

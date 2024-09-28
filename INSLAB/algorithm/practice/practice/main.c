//
//  main.c
//  practice
//
//  Created by 왕성훈 on 4/11/24.
//

#include <stdio.h>

int main(void) {
    int a, b, c;
    int max;
    printf("get the maximum value\n");
    printf("a : "); scanf("%d", & a);
    printf("b : "); scanf("%d", & b);
    printf("c : "); scanf("%d", & c);
    max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    
    printf("the maximum value is %d.\n", max);
    
    return 0;
}

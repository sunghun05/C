//
//  text1_2.c
//  practice
//
//  Created by 왕성훈 on 4/12/24.
//

#include "text1_2.h"
#include <stdlib.h>

int search(const int a[], int n , int key)
{
    int i = 0;
    while(1) {
        if (i ==n)
            return -1;  //검색 실패
        if(a[i] == key)
            return i;   //검색 성공
        i++;
    }
}
int main(void) {
    int i, nx, ky, idx;
    int *x;                 //배열의 첫 번째 요소에 대한 포인터
    puts("선형 검색");
    printf("요소 개수: ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    for(i = 0; i < nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    printf("검색값 : ");
    scanf("%d", &ky);
    idx = search(x, nx, ky);
    if(idx == -1)
        puts("검색에 실패했습니다.");
    else
        printf("%d 는 x[%d]에 있습니다.\n", ky, idx);
    free(x);
    
    return 0;
}


#include <stdio.h>
#include "list.h"

int main(void) {
    
    int data ;
    setList();
    print();
    printf("max : %d\n", listMax());
    printf("pop : %d\n", pop());
    
    printf("추가할 데이터를 입력하세요 :");
    scanf("%d", &data);
    append(data);
    print();
    printf("\n평균 : %d\n", avg());
    
    
    return 0;
}

#include <stdio.h>

int main()
{
    int* numPtr;      //포인터 변수 선언
    int num1 = 10;

    numPtr = &num1;   //&로 변수의 주소를 구해서 포인터 변수에 저장

    *numPtr = 20;     //역참조 연산자로 메모리 주소에 접근하여 다른 값을 저장하면 num1의 값도 바뀜

    printf("%p\n", numPtr);
    printf("%p\n", &num1);    //공간에 저장된 값을 바꾸었으므로 numPtr, num1 모두 똑같이 바뀐 메모리 주소를 출력한다.
    printf("%d\n", *numPtr);  //역참조 연산자로 메모리 주소에 접근하여 값을 가져옴

    return 0;
}
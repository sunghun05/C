
#define Rsize 5
#define Csize 4

int arrayEx1(void) {
    
    int a[Rsize][Csize] = {0};//4x5 arry
    
    for(int i = 0; i<Rsize; i++){
        for (int j = 0; j<Csize; j++){
            //printf("%d", a[i][j]);
            printf("%d", *(*(a+i)+j));//이중포인터
        }
        printf("\n");
    }
    
    printf("\n이중포인터 : %d\n", **a);
    
    
    
    
    return 0;
}
int arrayEx2(void){
    
    char c[4] = {'A', '\0', '\0', '\0'};
    int* p = (int *)c;
    for(int i = 0; i<4; i++){
        printf("\n%d", (int)*(p+i));
    }
    printf("\n");
    
    return 0;
}
int doublePoint(void) {
    
//    double dint[4] = {0,0};
//    int *p = (int *)dint;
//    p[0] = 1;
//    p[1] = 2;
//    p[2] = 3;
//    p[3] = 4;
//    printf("\n");
//    for (int i = 0; i<4; i++){
//        printf("%u %d\n", p+i, *(p+i));
//    }
//    
//    void* ptr;
//
//    int num = 42;
//    double num1 = 55.3;
//    ptr = &num;
//    int* pNum = (int*)ptr;
//    printf("\npNum : %d\n", *pNum);
//    
    int number = 1;
    int* a = &number;
    
    *a = 2;
    
    printf("%d", number);
    
    
    
    
    return 0;
}

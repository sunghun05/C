
typedef struct {
    char name[12];
    int salary;
    
}information;

int ex1(void) {
    information employs[] = {
        {"홍길동", 20000000},
        {"임걱정", 30000000},
        {"김영철", 25000000}
    };
    for (int i = 0 ; i<3; i++){
        printf("직원 이름 : %s  월 급여 : %d\n", employs[i].name, employs[i].salary);
    }
    return 0;
}

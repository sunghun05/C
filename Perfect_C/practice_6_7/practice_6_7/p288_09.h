int ex4(void){
    
    int year = 0, mon = 0;
    printf("년과 월을 다음과 같이 입력하면 그 달의 말일을 알려드립니다.\n2003 3 : 입력 >> ");
    scanf("%d %d", &year, &mon);
    int data = 0;
    
    switch (mon){
        case 1:
            data = 31;
            break;
        case 2:
            if(year % 4 == 0 && year % 100 != 0){
                data = 29;
            }else{
                data = 28;
            }
            break;
        case 3:
            data = 31;
            break;
        case 4:
            data = 30;
            break;
        case 5:
            data = 31;
            break;
        case 6:
            data = 30;
            break;
        case 7:
            data = 31;
            break;
        case 8:
            data = 31;
            break;
        case 9:
            data = 30;
            break;
        case 10:
            data = 31;
            break;
        case 11:
            data = 30;
            break;
        case 12:
            data = 31;
            break;
        default:
            printf("올바른 값을 입력하세요.");
    }
    printf("%d년 %d월의 말일은 %d일입니다.\n", year, mon, data);
    return 0;
}

int ex3(void){
    
    int year = 0;
    printf("년도입력 : ");
    scanf("%d", &year);
    
    if(year % 4 == 0 && year % 100 != 0){
        printf("%d 년은 윤년입니다.", year);
    }else{
        printf("%d 년은 윤년이 아닙니다.", year);
    }
    
    return 0;
}

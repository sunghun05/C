int ex7(void) {
    
    int number = 1234;
    int num = 0;
    int con = 1;
    
    printf("큰 정수를 입력하세요 : ");
    scanf("%d", &number);
    
    do{
        
        con *= 10;
        num = number % con;
        number -= num;

        printf("%d", num/(con/10));

    }while (number/con > 0);
    printf("\n");
    
    return 0;
}

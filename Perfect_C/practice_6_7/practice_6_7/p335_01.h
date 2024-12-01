int ex5(void){
    
    int num = 0;
    int tot = 0;
    printf("양의 정수 입력 : ");
    scanf("%d", &num);
    
    for (int i = 0; i <= num; i++){
        tot += i;
    }
    printf("1에서 %d까지의 합 : %d\n", num, tot);
    
    return 0;
}

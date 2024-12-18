int p199_06(void){
    int num1;
    int num2;
    int sum;
    float average;
    printf("두 정수를 입력하세요 : ");
    scanf("%d %d", &num1, &num2);
    printf("\n%d %d\n", num1, num2);
    
    sum = num1 + num2;
    average = sum / 2;
    
    printf("합 : %d + %d = %d\n", num1, num2, sum);
    printf("평균 : %d / 2 = %f\n", sum, average);
    
    return 0;
}

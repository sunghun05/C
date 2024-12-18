int p199_05(void){
    
    float num1;
    float num2;
    
    printf("실수1 입력 : ");
    scanf("%f", &num1);
    printf("실수2 입력 : ");
    scanf("%f", &num2);
    
    printf("\n가로(밑변) : %f 세로(높이) : %f\n", num1, num2);
    printf("사각형 면적 : %12f\n", num1*num2);
    printf("삼각형 면적 : %-12f", num1*num2*(1/2));
    
    return 0;
}

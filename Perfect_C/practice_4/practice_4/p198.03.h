

int p198_03(void){
    
    const float c = 3.305785;
    float area;
    float meter;
    
    printf("평수 입력 : ");
    scanf("%f", &area);
    printf("\n");
    
    meter = c*area;
    
    printf("입력된 평 수 : %f\n", area);
    printf("제곱미터 : %f\n", meter);
    
    return 0;
}

int ex2(void){
    
    float height = 0, weight = 0;
    float bmi;
    
    printf("신장(cm)와 몸무게(kg)을 입력하세요 : ");
    scanf("%f %f", &height, &weight);
    printf("\n신장 : %.2f, 몸무게 : %.2f", height, weight);
    height = height / 100;
    bmi = weight / (height*height);
    printf("    BMI 지수 : %.2f", bmi);
    
    if (bmi >= 40){
        printf(" 고도 비만");
    }else if (bmi >= 35 && bmi < 40){
        printf(" 중등도 비만");
    }else if (bmi >= 30 && bmi < 35){
        printf(" 비만");
    }else if (bmi >= 25 && bmi < 30){
        printf(" 과체중");
    }else if (bmi >= 18.5 && bmi < 25){
        printf(" 정상");
    }else if (bmi < 18.5){
        printf(" 저체중");
    }
    
    
    return 0;
}


#define PI 3.141592

int p198_01(void){
    
    float rad = 0;

    printf("원 반지름 입력    ");
    scanf("%f", &rad);
    
    float cir = 2.0*PI*rad;
    float area = PI*rad*rad;
    
    printf("원 반지름        %-10f\n", rad);
    printf("원 면적         %-10f\n", area);
    printf("원 둘레         %-10f\n", cir);

    return 0;
}

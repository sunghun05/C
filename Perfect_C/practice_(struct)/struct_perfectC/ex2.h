
typedef struct{
    int numerator;
    int denominator;
} fraction;

fraction a = {4, 5};
fraction b = {3, 7};

int ex2(void){
    
    printf("a : %d/%d\n", a.numerator, a.denominator);
    printf("b : %d/%d\n", b.numerator, b.denominator);
    
    return 0;
}

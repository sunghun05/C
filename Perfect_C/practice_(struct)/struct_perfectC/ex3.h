
int ex3(void) {
    
    extern fraction a;
    extern fraction b;
    
    printf("c = a*b = %d/%d\n", a.numerator*b.numerator, a.denominator*b.denominator);
    
    return 0;
}

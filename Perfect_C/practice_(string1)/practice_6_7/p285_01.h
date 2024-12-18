int ex1(void){
    
    float num1, num2, res;
    char c ;
    res = 0;
    
    printf("3.4+4.5 와 같이 두 실수와 연산자를 붙여서 입력 : ");
    scanf("%f%c%f", &num1, &c, &num2);
    
    if (c == '+'){
        res = num1 + num2;
    }else if (c == '-'){
        res = num1 - num2;
    }else if (c == '/'){
        res = num1 / num2;
    }else if (c == '*'){
        res = num1 * num2;
    }
    
    printf("\n%.3f %c %.3f = %.3f", num1, c, num2, res);
    
    return 0;
}

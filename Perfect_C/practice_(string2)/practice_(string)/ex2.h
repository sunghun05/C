int ex2(void){
    
    char s1[100] = "C 언어", s2[] = "사랑합니다!";
    char* p = s1;
    
    printf("두 문자열을 붙인 결과 : ");
    while(*p!='\0'){
        printf("%c", *p);
        p++;
    }
    p = s2;
    printf(" ");
    
    while(*p!='\0'){
        printf("%c", *p);
        p++;
    }
    
    return 0;
}

int ex6(void){
    
    char s1[20] = "", s2[20] = "", tmp[3] = "";
    char* p1;
    char* p2;
    int len_s1 = 0;
    int len_s2 = 0;
    
    while(1){
        
        printf("첫번째, 두번째 문자열을 각각 입력하세요 (세자리이상) : ");
        scanf("%19s %19s", s1, s2);
        p1 = s1;
        p2 = s2;
        while(*p1 != '\0'){
            *p1 = s1[len_s1];
            len_s1++;
            p1++;
        }
        while(*p2 != '\0'){
            *p2 = s2[len_s2];
            len_s2++;
            p2++;
        }
        
        if (len_s1>=3 && len_s2>=3){
            break;
        }
        
    }
    
    p1 = s1;
    p2 = s2;
    
    
    
    for (int i = 0; i<3; i++){
        
        tmp[i] = s1[i];
        *(p1 + i) = *(p2 + i);
        
    }
    for(int i = 0; i < len_s1; i++){
        printf("%c" , *(p1 + i));
    }printf("   ");

    for (int i = 0; i<len_s2; i++){
        
        printf("%c", *(p2 + i));
        
    }
    for (int i = 0; i<3; i++){
        
        printf("%c", tmp[i]);
        
    }
    
    printf("\n");
    return 0;
}

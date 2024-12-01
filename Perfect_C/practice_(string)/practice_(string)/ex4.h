int sti (char num[100]) {
    int res = 0;
    char* p;
    
    p = num;
    int len = 0;
    while(*p != '\0'){
        //printf("%d", len);
        if (*p < '0' || *p > '9'){
            return -1;
        }else{
            *p = num[len];
            len++;
            p++;
        }
    }

    //printf("len : %d", len);
    p = num;
    for (int j = 0; j<len; j++){
        
        res += ((*p-'0') * pow(10, len-j-1));
        p++;
    }
    
    
    return res;
}

int ex4(void) {
    
    char num[100] = "";
    int res[2];
    printf("정수를 하나 입력하세요 : ");
    scanf("%s", num);

    res[0] = atoi(num);
    res[1] = sti(num);
    printf("\natoi()를 이용한 결과 : %d", res[0]);
    printf("\n직접 구현한 함수를 이용한 결과 : %d\n", res[1]);
    
    return 0;
}

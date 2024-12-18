int ex5(void){
    char st[20];
    char* p;
    int len;
    printf("enter a string : ");
    scanf("%19s", st);
    p = st;
    len = (unsigned int)strlen(st);
    printf("input : %s\n", p);
    for(int i = 0; i<len; i++){
        p = st;
        int place = len-i-1;
        p = p + place;
        while(*p!='\0'){
            printf("%c", *p);
            p++;
        }
        p = st;
        for (int j = 0; j<place; j++) {
            
            printf("%c", *p);
            p++;
        }
        printf("\n");

    }
    
    return 0;
}

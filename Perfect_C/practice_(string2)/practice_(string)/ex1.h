int ex1(void) {
    int size = 1;
    char word[100];
    char* p = word;
    
    
    printf("한 단어를 입력하세요 >> ");
    scanf("%s", word);

    while(*p!='\0'){
        size++;
        p++;
    }
    
    for (int i = 0; i<size; i++){
        printf("%c", *(p-i));
    }
    printf("\n");
    
    return 0;
    
}

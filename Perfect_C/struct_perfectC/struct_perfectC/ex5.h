typedef struct{
  
    int st_num;
    char street[20];
    char city[20];
    
}adress;
typedef struct {
    adress ad;
    char name[20];
    char phnum[11];
}people;

int ex5(void) {
    
    people Lee = {{123, "시청길", "춘천시"}, "이재원", "01012341234"};
    people Joe = {{456, "경인로", "서울시"}, "조은진", "01098765432"};
    people Kim = {{789, "영통로", "수원시"}, "김우석", "01056785678"};
    
    printf("     주소         이름        전화번호\n");
    
    printf("%s %s %d   %s    %s\n", Lee.ad.city, Lee.ad.street, Lee.ad.st_num, Lee.name, Lee.phnum);
    printf("%s %s %d   %s    %s\n", Joe.ad.city, Joe.ad.street, Joe.ad.st_num, Joe.name, Joe.phnum);
    printf("%s %s %d   %s    %s\n", Kim.ad.city, Kim.ad.street, Kim.ad.st_num, Kim.name, Kim.phnum);
    
    
    return 0;
}

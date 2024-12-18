int ex6(void){
    
    int count = 0;
    
    for (int i = 1 ; i<=100; i++) {
        
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0){
            continue;
        }else {
            printf("%-2d  ", i);
            count += 1;
        }
        if (count % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}

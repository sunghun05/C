int write(void) {
    
    char name[3][20];
    double score[3][3];
    int cnt = 0;
    
    FILE* f;
    f = fopen("origin.txt", "r");
    
    if(f == NULL){
        printf("file is not opening");
        exit(1);    //stdlib.h
    }
    int i = 0;
    while(feof(f)!=0){
        fscanf(f, "%d %s %lf %lf %lf", &cnt, name[i], &score[i][0], &score[i][1], &score[i][2]);
        i++;
    }
    printf("%f", score[0][0]);
    fclose(f);
    
    f = fopen("output.txt", "w");
    
    if(f == NULL){
        printf("file is not opening");
        exit(1);    //stdlib.h
    }
    for(int j = 0 ; j<cnt; j++){
        fprintf(f, "%d %s %.1lf %.1lf %.1lf\n", j+1, name[j], score[j][0], score[j][1], score[j][2]);
    }
    fclose(f);
    
    return 0;
}

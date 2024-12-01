int ex6(void) {
    
    int a[4][3] = {{46, 79, 78}, {35, 57, 28}, {43, 68, 76}, {56, 78, 98}};
    int b[4][3] = {{78, 35, 99}, {85, 82, 34}, {58, 69, 29}, {34, 59, 35}};
    
    int sum[4][3];
    int sub[4][3];
    
    for (int i = 0; i<4; i++){
        for (int j = 0; j<3; j++){
            sum[i][j] = a[i][j] + b[i][j];
            if (a[i][j]>b[i][j]) {
                sub[i][j] = a[i][j] - b[i][j];
            }else {
                sub[i][j] = b[i][j] - a[i][j];
            }
        }
    }
    
    printf("두 행렬 합의 결과\n");
    for (int i = 0; i<4; i++){
        for (int j = 0; j<3; j++){
            printf("%5d", sum[i][j]);
        }
        printf("\n");
    }
    printf("두 행렬 \"차\"의 결과\n");
    for (int i = 0; i<4; i++){
        for (int j = 0; j<3; j++){
            printf("%5d", sub[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}

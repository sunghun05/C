int ex5(void) {

    //"이현수" "김기수" "김범용" "장기태" "이명수"

    int a[5][4] = { {97, 90, 88, 95},{76, 89, 75, 83}, {60, 70, 88, 82}, {83, 89, 92, 85},{75, 73, 72, 78} };
    double sum[5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            sum[i] += a[i][j];
        }
    }

    printf("     이름     중간    중간    기말    기말\n");
    printf("==============================================\n");
    printf("    이현수   ");for(int i = 0; i<4;i++){printf("  %d   ",a[0][i]);}
    printf("   %d",(int)sum[0]); printf("   %.2f",sum[0]/4.0);printf("\n");
    printf("    김기수   ");for(int i = 0; i<4;i++){printf("  %d   ",a[1][i]);}
    printf("   %d",(int)sum[1]); printf("   %.2f",sum[1]/4.0);printf("\n");
    printf("    김범용   ");for(int i = 0; i<4;i++){printf("  %d   ",a[2][i]);}
    printf("   %d",(int)sum[2]); printf("   %.2f",sum[2]/4.0);printf("\n");
    printf("    장기태   ");for(int i = 0; i<4;i++){printf("  %d   ",a[3][i]);}
    printf("   %d",(int)sum[3]); printf("   %.2f",sum[3]/4.0);printf("\n");
    printf("    이명수   ");for(int i = 0; i<4;i++){printf("  %d   ",a[4][i]);}
    printf("   %d",(int)sum[4]); printf("   %.2f",sum[4]/4.0);printf("\n");
    
    return 0;
}

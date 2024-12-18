int ex4(void) {

    srand((int)time(NULL));
    int num[20];
    int cnt[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int max[2];

    for (int i = 0; i < 20; i++) {
        num[i] = rand() % (9 + 1);
    }
    for (int j = 0; j < 20; j++) {
        printf("%d  ", num[j]);
    }
    for (int i = 0; i < 20; i++) {

    switch (num[i]) {
        case 0:
            cnt[0] += 1;
            break;
        case 1:
            cnt[1] += 1; break;
        case 2:
            cnt[2] += 1; break;
        case 3:
            cnt[3] += 1; break;
        case 4:
            cnt[4] += 1; break;
        case 5:
            cnt[5] += 1; break;
        case 6:
            cnt[6] += 1; break;
        case 7:
            cnt[7] += 1; break;
        case 8:
            cnt[8] += 1; break;
        case 9:
            cnt[9] += 1; break;
        }
    }
    //printf("\cnt\n");
    /*for (int j = 0; j < 10; j++) {
    printf("%d\n", cnt[j]);
    }*/
    for (int k = 0; k < 10; k++) {
        if (max[1] < cnt[k]) {
            max[1] = cnt[k];
            max[0] = k;
        }
    }
    printf("가장 많이 나온 값: %d, 횟수 : %d", max[0], max[1]);


return 0;
}

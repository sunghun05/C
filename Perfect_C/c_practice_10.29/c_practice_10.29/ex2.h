int ex2(void) {

    int a[] = { 32, 56, 7, 8, 24 };
    int b[] = { 3, 21, 35, 57, 24, 82, 8 };
    int size_a = sizeof(a) / sizeof(int);
    int size_b = sizeof(b) / sizeof(int);

    int c[12];

    for (int i = 0; i <= size_a; i++) {
        c[i] = a[i];
    }
    for (int i = 0; i <= size_b; i++) {
        c[i+size_a] = b[i];
    }
    for (int j = 0; j < (size_a + size_b); j++) {
        printf("%d\n", c[j]);
    }

return 0;
}

int ex3(void) {

int a[] = { 4, 7, 9, 3, 6 };
int b[] = { 10, 20, 30, 40, 50, 60 };
int size_a = sizeof(a) / sizeof(a[0]);
int size_b = sizeof(b) / sizeof(b[0]);

for (int i = 0; i < size_a; i++) {
b[i] = a[i];
}
for (int i = 0; i < size_b; i++) {
printf("%d\n", b[i]);
}

return 0;
}

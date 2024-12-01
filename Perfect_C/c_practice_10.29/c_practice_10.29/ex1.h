int ex1(void) {

int size = 0;
double degree[] = { -5.34, 3.67, 19.76, 28.76, 35.63 };
size = sizeof(degree) / sizeof(double);

for (int i = 0; i <= size; i++) {
printf("%.2f\n", degree[i]);
}

return 0;
}


#include <stdio.h>

int main(void) {
//    int sum = 0;
//    int b = 0;
//    for (int k = 1; k<= 100; k++){
//        b += k;
//        sum += b;
//    }
//    printf("%d", sum);
    
    int min = 1;
    int max = 100;
    float sum = 0;
    
    sum = ((min + max)/2) * (max/2);
    
    printf("%f", sum);
    
    return 0;
}

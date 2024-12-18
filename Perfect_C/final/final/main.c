
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "15_file.h"

int main(void) {

//    write();
    //char a[] = "hello world";
    char *a;
    char *p;
    
    a = (char*)malloc(sizeof(char)*12);
    p = a;
    strcpy(a, "hello world");
    
    printf("%p\n", a);
    printf("%p\n", p);
    
    printf("%s\n", a+3);
    
    free(a);
    
//    char b = getchar();
//    printf("%c", b);
    
    char bana[] = "banana banana banana";
    char* ptr;
    ptr = bana;
    
    while((ptr = strstr(ptr, "banana")) != NULL){
        printf("%s\n", ptr);
        ptr++;
    }
    
    return 0;
}

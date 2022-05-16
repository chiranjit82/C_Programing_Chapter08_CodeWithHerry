#include<stdio.h>

int main(){ 
    char s[] = {'R', 'u', 'b', 'a', 'i', '\0'};
    char st[] = "Bauria";
    char *ptr = s;
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}
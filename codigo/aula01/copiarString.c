#include <stdio.h>

int main(int, char**){
    char str1[] = "abc";
    char str2[10];
    int i;
    for (i = 0; str1[i] != '\0'; i++){
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("%s", str2);

    return 0;
}
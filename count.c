#include <stdio.h>

int main(void){
    char ch;
    int count=0;

    while((ch=getchar())!=EOF){ // Ctrl+D for Linux and Ctrl+Z for Windows
        count++;
    }
    printf("    %d\n", count);
    return 0;
}
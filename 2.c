#include <stdio.h>

int main(void){
    char ch;
    int n_char=0;
    printf("Enter the text (# to end the process): \n");
    while((ch=getchar())!='#'){
        printf("  char-code : %c-%d", ch, ch);
        n_char++;
        if(n_char%8==0){
            printf("\n");
        }
        
    }
    return 0;
}

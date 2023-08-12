#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    int n_spaces=0;
    int n_newl=0;
    int n_char=0;

    printf("Please enter a text: \n");
    while((ch=getchar())!='#'){
        if(isspace(ch)){
            n_spaces++;
        }
        if(ch=='\n'){
            n_newl++;
        }
        if(!isspace(ch) && ch!='\n'){
            n_char++;
        }

    }
    printf("Number of spaces: %d, number of newl: %d, number of all char: %d.", 
    n_spaces, n_newl, n_char);

    return 0;


}
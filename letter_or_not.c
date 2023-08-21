#include <stdio.h>
#include <ctype.h>

int test(char ch){
    if(isalpha(ch)){
        printf("\n%c   %d", ch, ch);
    }else if(!isalpha(ch)){ 
        return -1;}
    return 0;    
}

int  main(void){
    char ch;
    printf("Enter the input: \n");
    while ((ch=getchar())!=EOF){
        if(test(ch)==-1){
            printf("\nIvalid value!");
        }
    }
    return 0;
} 
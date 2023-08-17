// number of lowercase and uppercase chars
#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    int low=0, up=0;
    int sum;
    printf("Enter the input characters: \n");
    while((ch=getchar())!=EOF){
        if(islower(ch)){
            low++;
        }else if(isupper(ch)){
            up++;
        }
    }
    sum=low+up;
    printf("\nThe number of lowercase is %d and of uppercase is %d", low, up);
    printf("\nSum of characters : %d", sum);
    return 0;
}
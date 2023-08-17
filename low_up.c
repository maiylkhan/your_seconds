// number of lowercase and uppercase chars
#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    int low=0, up=0, punct=0, spaces=0;
    int sum;
    printf("Enter the input characters: \n");
    while((ch=getchar())!=EOF){
        if(islower(ch)){
            low++;
        }else if(isupper(ch)){
            up++;
        }else if(ispunct(ch)){
            punct++;
        }else if(isspace(ch)){
            spaces++;
        }
    }
    sum=low+up+spaces+punct;
    printf("\nThe number of lowercase is %d , of uppercase is %d , of spaces is %d , of punct is %d", low, up, spaces, punct);
    printf("\nSum of characters : %d", sum);
    return 0;
}

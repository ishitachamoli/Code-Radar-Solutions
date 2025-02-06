#include <stdio.h>
int main(void){
    int a, b; 
    char ch;
    scanf("%d %d %c", &a, &b, &ch);
    if(ch=="+"){
        printf("%d", a+b);
    }
    if(ch=="-"){
        printf("%d", a-b);
    }
    if(ch=="*"){
        printf("%d", a*b);
    }
    if(ch=="/"){
        printf("%d", a/b);
    }
    return 0;
}
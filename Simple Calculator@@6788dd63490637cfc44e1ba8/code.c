#include <stdio.h>
int main(void){
    double a, b;
    char ch;
    scanf("%d %d %c", &a, &b, &ch);
    if(ch=='+'){
        printf("%d", a+b);
    }
    else if(ch=='-'){
        printf("%d", a-b);
    }
    else if(ch=='*'){
        printf("%d", a*b);
    }
    else if(ch=='/'){
        printf("%d", a/b);
    }
    else{
        printf("Error");
    }
    return 0;
}
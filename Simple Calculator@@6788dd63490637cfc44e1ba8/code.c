#include <stdio.h>
int main(void){
    double a, b;
    char ch;
    scanf("%lf %lf %c", &a, &b, &ch);
    if(ch=='+'){
        printf("%.lf", a+b);
    }
    else if(ch=='-'){
        printf("%.lf", a-b);
    }
    else if(ch=='*'){
        printf("%.lf", a*b);
    }
    else if(ch=='/'){
        printf("%.lf", a/b);
    }
    else{
        printf("Error");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int a, b=30, c=31;
    scanf("%d", &a);
    if(a%2!=0 && a<=11){
        printf("%d", c);
    }
    else if(a%2==0 && a<=12){
        printf("%d", b);
    }
    else if(a=="2"){
        printf("28");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
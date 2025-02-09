#include <stdio.h>

int main() {
    int a, b=31, c=30;
    scanf("%d", &a);
    if(a%2!=0 && (a>=1 && a<=11)){
        printf("%d", b);
    }
    else if(a%2==0 && (a>=4 && a<=12)){
        printf("%d", c);
    }
    else if(a=="2"){
        printf("28");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
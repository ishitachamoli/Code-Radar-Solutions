#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a<60 && a>0){
        printf("Not Eligible");
    }
    else{
        printf("Eligible");
    }
    return 0;
}
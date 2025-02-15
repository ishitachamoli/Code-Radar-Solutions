#include <stdio.h>
int main(void){
    int n; 
    scanf("%d", &n);

    if(n==1){
        printf("Prime");
    }

    int a = 0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            a = a + 1;
            break;
        }
    }

    if(a==0)
    printf("Prime");
    else
    printf("Not Prime");

    return 0;
}
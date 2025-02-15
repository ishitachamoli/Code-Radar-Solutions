#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    char ch;

    scanf("%d%c", &n, &ch);

    if(n==1){
        printf("Neither prime nor composite");
    }

    int a = 0;

    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            a = 1;
            break;
        }
    }

    if(a==0){
        print("Prime");
    }
    else{
        printf("Not Prime");
    }

    return 0;
}

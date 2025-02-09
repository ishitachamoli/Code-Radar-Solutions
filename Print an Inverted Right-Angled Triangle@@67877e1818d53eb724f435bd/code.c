#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
    if(n>=0){
        for(int i=1, i<=n, i+=1){
            printf("**%d", i, end=" ");
            print();
        }
    }
    return 0;
}
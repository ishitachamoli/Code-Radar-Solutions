#include <stdio.h>
int main(void){
    int rows;
    scanf("%d", &rows);

    int number = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

    return 0;
}
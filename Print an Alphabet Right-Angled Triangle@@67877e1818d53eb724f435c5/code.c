#include <stdio.h>
int main(void){
    int rows;
    scanf("%d", &rows);
    int alphabet = 65

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            printf("%c", alphabet);
        }
        printf("\n");
    }

    return 0;
}
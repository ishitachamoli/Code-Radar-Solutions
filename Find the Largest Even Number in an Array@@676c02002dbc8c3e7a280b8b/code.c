#include <stdio.h>
int main(void){
    int size;
    scanf("%d", &size);

    int arr[size];

    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        else{
            printf("-1");
        }
    }

    return 0;
}
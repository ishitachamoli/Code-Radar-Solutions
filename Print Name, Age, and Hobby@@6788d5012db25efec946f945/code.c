#include <stdio.h>

int main() {
    char name[1000], hobby[1000];
    int age;
    scanf("%c %d", &name, &age);
    scanf("%c", &hobby);
    printf("Name: %c\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %c", hobby);
    return 0;
}
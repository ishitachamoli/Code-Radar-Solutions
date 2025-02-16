#include <stdio.h>

int main() {
    char name[1000], hobby[1000];
    int age;
    scanf("%s %d %s", &name, &age, &hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s", hobby);
    return 0;
}
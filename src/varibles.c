#include <stdio.h>

int main() {
    int age = 20;
    float height = 5.8f;
    char grade = 'A';
    char name[] = "Nova";

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);
    printf("Hello %s \n", name);
    
    return 0;
}
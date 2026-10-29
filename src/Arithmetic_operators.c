
#include <stdio.h>

int main() {
    int a = 10, b = 5;

    printf("Assignment: %d\n", a);
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);

    a++;
    printf("Increment: %d\n", a);

    a--;
    printf("Decrement: %d\n", a);

    a += b;
    printf("Augmented addition: %d\n", a);

    a -= b;
    printf("Augmented subtraction: %d\n", a);

    a *= b;
    printf("Augmented multiplication: %d\n", a);

    a /= b;
    printf("Augmented division: %d\n", a);

     a += 2;
    printf("Augmented addition by 2: %d\n", a);

    a -= 2;
    printf("Augmented subtraction by 2: %d\n", a);
   
    a *= 2;
    printf("Augmented multiplication by 2: %d\n", a);

    a /= 2;
    printf("Augmented division by 2: %d\n", a);


    return 0;
}

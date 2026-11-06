
#include <stdio.h>
#include <math.h>

int main()
{
    double principal = 0.0;
    double rate = 0.0;
    double time = 0.0;
    double amount = 0.0;
    double compound_interest = 0.0;
    int n = 0;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (%%): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    amount = principal * pow((1 + rate / (100 * n)), n * time);

    compound_interest = amount - principal;

    printf("\nFinal Amount: %.2lf\n", amount);
    printf("Compound Interest: %.2lf\n", compound_interest);

    return 0;
}

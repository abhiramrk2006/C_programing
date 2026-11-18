
#include <stdio.h>

int main()
{
    char day = '\0';

    printf("Enter a day of the week (Mon, Tue, Wed, Thu, Fri, Sat, Sun ): ");
    scanf("%d", &day);

    switch(day)  {
        case 'Mon':
            printf("Monday");
            break;

        case 'Tue':
            printf("Tuesday");
            break;

        case 'Wed':
            printf("Wednesday");
            break;

        case 'Thu':
            printf("Thursday");
            break;

        case 'Fri':
            printf("Friday");
            break;

        case 'Sat':
            printf("Saturday");
            break;

        case 'Sun':
            printf("Sunday");
            break;

        default:
            printf("Invalid day\n");
            printf("Please only enter a character from (Mon, Tue, Wed, Thu, Fri, Sat, Sun)");

    }

    return 0;
}

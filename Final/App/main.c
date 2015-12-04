#include <stdio.h>
#include <main.h>

int main()
{
    printf( "Insert 1 - 4 for the run a program\n ");
    menuhelp();
    scanf("%d", &input);
    switch (input)
    {

    case 1:
        printf("Enter current day number \n");
        scanf("%d", &inputdaynumber);

        daynumbers(inputdaynumber);
        break;

    case 2:
        printf("Enter a number \n");
        scanf("%d", &inputnumber);

        divideBy3(inputnumber);
        break;

    case 3:
        printf("Enter N-th number in the Fibonacci sequence \n");
        scanf("%d", &Nth);

        fibonacci(Nth);
        break;
     case 4:

        break;

    case 5:
        matrix();
        break;

    case 7:

        break;

    default:
        printf( "Badly insert \n" );
    }
    system ("pause");
    return 0;
}

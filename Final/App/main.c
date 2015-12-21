#include <main.h>

int main()
{
    input = 100500;
    while (input!=0)
    {
        printf( "\nInsert 1 - 5 for the run a program or 0 to exit\n ");
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
            puts("Your number is: \n");
            fibonacci(Nth);
            break;
        case 4:

            break;

        case 5:
            matrix();
            break;

        case 0:
            system("exit");
            break;

        default:
            printf( "Badly insert \n" );
        }
    }
        return 0;
}

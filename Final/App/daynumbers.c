#include <daynumbers.h>

int daynumbers(inputday)
{
    if (inputday < 7)
    {
        next_number = inputday + 1;
        past_number = inputday - 1;
        printf("Past day number: %d\nNext day number: %d",  past_number, next_number);

    }
    if (inputday == 7)
    {
        past_number = inputday - 1;
        next_number = 1;
        printf("Past day number: %d\nNext day number: %d",  past_number, next_number);
    }
    if (inputday > 7)
        printf("Incorrect insert");
    return 0;
}

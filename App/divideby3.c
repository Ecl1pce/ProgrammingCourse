#include <divideby3.h>

int divideBy3(int insert)
{
    if (insert % 3 == 0)
        printf("The number is divisible by 3\n");
    else
        printf("The number is not divisible by 3\n");
    return 0;
}

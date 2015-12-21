#include <matrixnumbercheck.h>
int check(const int number) // функция проверяет простое это число или составное
{
    int i;
    int mas[number];
    int output = 0;
    mas [0] = 1;
    for (i = 1; i < (number - 1); i++)
    {
        mas[i] = mas[i-1] + 1;
    }
    for (i = 1; i < (number - 1); i++)
    {
        if (number % mas[i] != 0)
            output = output + 1;

    }
    if (output == 0)  // 0 возвращается если аргументом этой функции является простое число
        return 0;
    else
        return 1;     // 1 если число составное
}

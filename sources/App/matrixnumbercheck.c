#include <matrixnumbercheck.h>
int check(const int number) // функция проверяет простое это число или составное
{
    int i;
    int mas[number + 1];
    int output = 0;
    mas[1] = 1;
    for (i = 1; i < number; i++)
    {
        mas[i+1] = mas[i] + 1;
//        printf("%d ", mas[i+1]);
    }
    for (i = 2; i < number; i++)
    {
        if (number % mas[i] == 0)
            output = output + 1;
    }
    if (output == 0)
        {
//        puts("Prostoe");// 0 возвращается если аргументом этой функции является простое число
        return 0;
    }
    else
    {
//        puts("Sostavnoe");
        return 1;
        }
}

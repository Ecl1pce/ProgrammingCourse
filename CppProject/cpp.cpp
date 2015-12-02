#include "cpp.h"
#include <iostream>

using namespace std;


PriceList::PriceList()
{
    char **name = new char*[number_of_goods]; //Выделяем память под количество строк
    for (int i = 0; i < number_of_goods; i++)
    {
        name[i]=new char[20];  //Выделяем память под количество символов в строке для каждой строки в отдельности
    }
    return;
    //   char** name = new char*;
    //   cin >> N;
    //   for (int i = 0; i < N; i++)
    //   {
    //       *name[i] = new char;
    //   }

    //    for (int i = 0; i < N; i++)
    //    char* name[i] = new char[20];

    //    char name[100][20] = new char;
}
PriceList::setname(int number, char* name)
{
    PriceList::name[number] = name;
    return 0;
}

PriceList::setprice(int number, int price)
{
    PriceList::price[number] = price;
    return 0;
}

PriceList::findproductprice(int number)
{
    return price[number];
}

PriceList::productdeleat(int number)
{
    name[number] = 0;
    price[number] = 0;
    return 0;
}

PriceList::~PriceList()
{
    for (int i = 0; i < number_of_goods; i++) delete []name[i]; //Освобождаем память
    delete []name;
    return;
}

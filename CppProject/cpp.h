#ifndef CPP_H
#define CPP_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

class PriceList
{
public:
    int price[100];
    char **name;
    int number_of_goods;
    PriceList(); //конструктор
    ~PriceList(); //деструктор
    setname(int number, char* name);
    setprice(int number, int price);
    int findproductprice(int number);
    productdeleat(int number);
    int N;
};





#endif // CPP_H

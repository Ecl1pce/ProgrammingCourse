#include "PriceList.h"

PriceList::PriceList(int number_of_goods)
{
      std::string *name = new std::string[number_of_goods];
      int *price = new int[number_of_goods];
      for (int i = 1; i <= number_of_goods; i++)
      {
          name[i] = " ";
          price[i] = 0;
      }

//    char **name = (char**) new char*[number_of_goods]; //Выделяем память под количество строк
//    for (int i = 0; i < number_of_goods; i++)
//    {
//        name[i]= (char*) new char[20];  //Выделяем память под количество символов в строке для каждой строки в отдельности
//    }
    return;

}
void PriceList::setname(int number, std::string name)
{
    PriceList::name[number] = name;
}

void PriceList::setprice(int number, int price)
{
    PriceList::price[number] = price;
}

std::string PriceList::getname(int number)
{
    return name[number];
}

PriceList::getprice(int number)
{
    return price[number];
}

PriceList::findproductprice(int number)
{
    return price[number];
}

PriceList::productdeleat(int number)
{
    name[number] = " ";
    price[number] = 0;
    return 0;
}

PriceList::~PriceList()
{
    delete []name;
    return;
}

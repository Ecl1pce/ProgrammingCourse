#ifndef CPP_H
#define CPP_H
#include <string>


class PriceList
{
public:
    void setname(int number, std::string name);
    void setprice(int number, int price);
    std::string getname(int number);
    int getprice(int number);
    int findproductprice(int number);
    productdeleat(int number);
    int N;
private:
    int price[100];
    std::string *name;
    int number_of_goods;
    PriceList(int number_of_goods); //конструктор
    PriceList(); //конструктор без параметров
    ~PriceList(); //деструктор
};


#endif // CPP_H

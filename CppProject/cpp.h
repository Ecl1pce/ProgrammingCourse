#ifndef CPP_H
#define CPP_H


class PriceList
{
public:
    int price[100];
    char name[100][20];
    PriceList(); //конструктор
    ~PriceList(); //деструктор
    setname(int i);
    setprice(int i);
    productdeleat();
    productpricesearch();
}





#endif // CPP_H

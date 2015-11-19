#include "xogame.h"
#include "iostream"


XOGame::XOGame()
{
    std::cout << "Hello constructor"<< std::endl;

    XOGame xoGame;    // создаем объект с именем xoGame
    xoGame.helloworld();

    std:: cout <<xoGame.getMyVar() << std::endl;
    return 0;
}


#include <Konto.h>
#include <iostream>
#include <string>

void output(Konto konto[])
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Konto " << (i+1) << ": " << konto[i].getKontostand() << "\n==========" << std::endl;
    }
    
}

void line()
{
    std::cout << "\n==========" << std::endl;
    return;
}

int main() 
{
    Konto konto[3];
    std::cout << "Initalisierter Kontostand: " << std::endl;
    line();
    output(konto);
        
    int neuerKontostand = konto[0].getKontostand() * 2;
    konto[0].setKontostand(neuerKontostand);
    neuerKontostand = konto[1].getKontostand() * 3;
    konto[1].setKontostand(neuerKontostand);
    neuerKontostand = konto[2].getKontostand() * 10;
    konto[2].setKontostand(neuerKontostand);

    std::cout << "Neuer Kontostand: " << std::endl;
    line();
    output(konto);

    return 0;
}
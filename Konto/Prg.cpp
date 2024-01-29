#include <Konto.h>
#include <iostream>
#include <string>

void output(Konto konto[])
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Konto " << (i+1) << ": " << konto[i].getKontostand() << "\n----------" << std::endl;
    }
    return;
}

void line()
{
    std::cout << "\n----------" << std::endl;
    return;
}

int main() 
{
    Konto konto[3];
    std::cout << "Initalisierter Kontostand: ";
    line();
    output(konto);
        
    konto[0].setKontostand(konto[0].getKontostand() * 2);
    konto[1].setKontostand(konto[1].getKontostand() * 3);
    konto[2].setKontostand(konto[2].getKontostand() * 10);

    std::cout << "Neuer Kontostand: ";
    line();
    output(konto);

    return 0;
}
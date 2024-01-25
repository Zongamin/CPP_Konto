#include <Konto.h>
#include <iostream>
#include <string>

int main() 
{
    Konto konto[3];

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Konto " << (i+1) << ": " << konto[i].getKontostand() << "\n---------\n";
    }

    return 0;
}
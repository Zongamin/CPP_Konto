#include <iostream>
#include <string>

class Konto 
{
    private:
    int Kontostand = 10000;

    public:
    int getKontostand()
    {
        return Kontostand;
    }

    void setKontostand(int kontostand)
    {
        Kontostand = kontostand;
    }
};
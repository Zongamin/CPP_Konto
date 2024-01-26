#include <iostream>
#include <string>

class Konto 
{
    private:
    int kontostand = 10000;

    public:
    int getKontostand()
    {
        return kontostand;
    }

    void setKontostand(int kontostand)
    {
        this->kontostand = kontostand;
    }
};
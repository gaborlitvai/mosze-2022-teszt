#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //hibas konstans nev,
    std::cout << '1-100 ertekek duplazasa' //string helyett karakterkent van kezelve, hianyzo pontosvessszo es sor emeles
    for (int i = 0;) //hianyos for ciklus, hibas kezdoertek
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //hianyos for ciklus, hibas kezdoertek
    {
        std::cout << "Ertek:" //hianyzik a kiirando ertek, a pontosvesszo es a soremeles
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //vesszo pontosvesszo helyett
    {
        atlag += b[i] //hianyzo pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}

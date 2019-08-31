#include <iostream>

using namespace std;

void zvezdochki(int kol_vo)
{
    for(int width = 0;width<kol_vo*2-1;width++)
    {
        cout << "*";
    }
    cout << "\n";
}

void probeli(int razmer, int kol_vo)
{
    while(razmer>kol_vo)
    {
        cout << " ";
        kol_vo++;
    }
}

void penjok(int razmer)
{
    for(int i = 1;i<razmer;i++)
    {
        cout << " ";
    }
    cout << "*";
}

int main()
{
    int sizeElka = 0;
    cout << "Vvedite razmer elochki: ";
    cin >> sizeElka;
    for(int i = 1;i<=sizeElka;i++)
    {
        probeli(sizeElka,i);
        zvezdochki(i);
    }
    penjok(sizeElka);
    return 0;
}

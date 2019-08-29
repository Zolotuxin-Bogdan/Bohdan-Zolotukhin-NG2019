#include <iostream>

using namespace std;

void showAllCards(float* carts, int arrSize)
{
    for(int i=0;i<arrSize;i++)
    {
        cout << carts[i] << " ";
    }
}

void addMoney(float* carts, int nom, float kolvo)
{
    carts[nom-1]+=kolvo;
}

void summa(float* carts, int arrSize)
{
    float sum = 0;
    for(int i=0;i<arrSize;i++)
    {
        sum+=carts[i];
    }
    cout << "\nSumma: "<< sum <<"\n\n";
}

int askNomer()
{
    int nomer;
    cout << "Vvedi nomer kartochki: ";
    cin >> nomer;
    cin.clear();
    cin.sync();
    return nomer;
}

bool checkValidNomer(int nom)
{
    if (nom>=1 && nom<=10)
    {
        return true;
    }
    else
    {
        cout << "Error! Takoi kartu net\n\n";
        return false;
    }
}

int askKolvo()
{
    float kolvo;
    cout << "Skolko polozhit: ";
    cin >> kolvo;
    cin.clear();
    cin.sync();
    return kolvo;
}

int main()
{
    float cards[10]={0,0,0,0,0,0,0,0,0,0};
    int nomer=0;
    float dengi=0;

    while (1)
    {
        nomer=askNomer();
        if (checkValidNomer(nomer)==true)
        {
            dengi=askKolvo();
            addMoney(cards, nomer, dengi);
            showAllCards(cards,10);
            summa(cards,10);
        }
    }
    return 0;
}

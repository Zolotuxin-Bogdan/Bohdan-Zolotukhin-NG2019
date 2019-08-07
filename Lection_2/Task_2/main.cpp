#include <iostream>

using namespace std;

int main()
{
    float cards[10]={0,0,0,0,0,0,0,0,0,0};
    int nomer=0;
    float summa=0;
    while(1)
    {
        cout << "Vvedi nomer kartochki: ";
        cin >> nomer;
        if (nomer<1 || nomer>10)
            cout << "Error! Takoi kartu net\n\n";
        else
        {
            cout << "Skolko polozhit: ";
            cin >> summa;
            cards[nomer-1]+=summa;
            for(int i=0;i<10;i++)
                cout << cards[i] << " ";
            cout << "\n\n";
        }
    }
    return 0;
}

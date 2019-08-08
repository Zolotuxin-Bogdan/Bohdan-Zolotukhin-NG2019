#include <iostream>

using namespace std;

int main()
{
    float cards[10]={0,0,0,0,0,0,0,0,0,0};
    int nomer=0;
    float summa=0;
    float dengi=0;
    while(1)
    {
        cout << "Vvedi nomer kartochki: ";
        cin >> nomer;
        if (nomer<1 || nomer>10)
            cout << "Error! Takoi kartu net\n\n";
        else
        {
            cout << "Skolko polozhit: ";
            cin >> dengi;
            cards[nomer-1]+=dengi;
            for(int i=0;i<10;i++)
                cout << cards[i] << " ";
            for(int i=0;i<10;i++)
                summa+=cards[i];
            cout << "\nSumma: "<< summa <<"\n\n";
            summa=0;
        }
    }
    return 0;
}

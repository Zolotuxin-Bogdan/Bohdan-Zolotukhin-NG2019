#include <iostream>

using namespace std;

int main()
{
    int mass[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int numb=0;
    do
    {
        cin >> mass[numb];
        while (mass[numb]%2==0 && mass[numb]!=0)
        {
            cout << "Error! Vvedeno chetnoe chislo...\nVvedite chislo zanovo\n";
            cin >> mass[numb];
        }
        numb++;
    } while (numb<20 && mass[numb-1]!=0);


    int max_number=mass[0];
    for(int i=0;i<20;i++)
    {
        if (mass[i] > max_number)
            max_number = mass[i];
    }

    for(int ii=0;ii<20;ii++)
    {
        if(mass[ii]!=0)
        {
        for(int i=1;i<=(max_number-mass[ii])/2;i++)
            cout << " ";
        for(int i=1;i<=mass[ii];i++)
            cout << "*";
        cout << endl;
        }
    }
    return 0;
}

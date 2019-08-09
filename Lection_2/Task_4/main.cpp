#include <iostream>

using namespace std;

int main()
{
    int zvezdi[5];
    int kol_vo=0;
    int minuss=0;
    for(int i=0;i<5;i++)
    {
        cout << "Zvezdochek v " << i+1 << "-om stolbike: ";
        cin >> zvezdi[i];
        kol_vo+=zvezdi[i];
    }
   while (kol_vo>0)
   {
       for(int i=0;i<5;i++)
       {
           if(zvezdi[i]-minuss>0)
           {
                cout << "*";
                kol_vo--;
           }
           else
                cout << " ";
       }
        minuss++;
       cout << endl;
   }
    return 0;
}

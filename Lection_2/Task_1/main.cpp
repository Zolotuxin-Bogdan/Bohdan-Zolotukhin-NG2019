#include <iostream>

using namespace std;

int main()
{
    int nomer[10];
    for(int i=0;i<10;i++)
    {
        cout << "Vvedi nomer kakoi-to shkolu: ";
        cin >> nomer[i];
        cout << endl;
    }

    int your_shkol;
    cout << "A teper vvedi svoyu shkolu: ";
    cin >> your_shkol;

    bool proverka=false;
    for(int i=0;i<10;i++)
    {
        if (nomer[i]==your_shkol)
            proverka = true;
    }
    if (proverka)
        cout << "Ya znayu etu shkolu!";
    else
        cout << "Ya ne znayu etu shkolu!";
    return 0;
}

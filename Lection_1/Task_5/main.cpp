#include <iostream>

using namespace std;

int main()
{
    int chislo = 0;
    cout << "Vvedite chislo: ";
    cin >> chislo;
    for (int i=0;i<=chislo;i++)
        cout << i << " ";
    cout << endl;
    system("pause");
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"ukr");
    float z;
    cout << "Vvedite vashy zarplaty: ";
    cin >> z;
    if (z>999)
    {
        if (z>999999)
            cout << "Ti millioner!";
        if (z<1000000)
            cout << "Horosho";
    }
    if (z<1000)
    cout << "Rabotai bolshe";
    cout << "...no ti molodec\n";
    return 0;
}

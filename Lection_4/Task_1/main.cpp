#include <iostream>

using namespace std;

int sumAllNumbers(int ins)
{
    while (ins!=0)
    {
        return sumAllNumbers(ins/10) + ins % 10;
    }
}

int main()
{
    int in = 0;
    cout << "Vvedite chislo: ";
    cin >> in;
    cout << "Summa vsex chisel: " << sumAllNumbers(in);
    return 0;
}

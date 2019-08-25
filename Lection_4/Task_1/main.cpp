#include <iostream>

using namespace std;

int sumAllNumbers(int ins)
{
    int summ = 0;
    while (ins!=0)
    {
        summ+=ins;
        ins--;
        sumAllNumbers(ins);
    }
    return summ;
}

int main()
{
    int in = 0;
    cout << "Vvedite chislo: ";
    cin >> in;
    cout << "Summa vsex chisel: " << sumAllNumbers(in);
    return 0;
}

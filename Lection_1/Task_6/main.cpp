#include <iostream>

using namespace std;

int main()
{
    int razmer = 0;
    cout << "Vvedite razmer kvadrata: ";
    cin >> razmer;
    for (int i=0;i<razmer;i++)
    {
        for (int i=0;i<razmer;i++)
        cout << "*";
        cout << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int stars = 0;
    cout << "Vvedite kol-vo zvezd: ";
    cin >> stars;
    for (int i=0;i<stars;i++)
        cout << "*";
    cout << endl;
    system("pause");
    return 0;
}

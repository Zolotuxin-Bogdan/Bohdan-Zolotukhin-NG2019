#include <iostream>

using namespace std;

int main()
{
    int razmer,razUp,razDown = 0;
    cout << "VVedite razmer elochki: ";
    cin >> razmer;
    razDown = razUp = razmer;
    for (int i = 0;i<razmer;i++)
    {
        for(int i = 1;i<=razUp;i++)
        {
        if ((i>=razDown) && (i<=razUp))
        cout << "*";
        else
        cout << " ";
        }
    cout << endl;
    razDown--;
    razUp++;
    }
    for (int i=1;i<razmer;i++)
        cout << " ";
    cout << "*";
    return 0;

}

#include <iostream>

using namespace std;

int main()
{
    int razmer = 0;
    int pos = 0;
    int width = 0;
    cout << "VVedite razmer elochki: ";
    cin >> razmer;

    for (pos = 1;pos<=razmer;pos++)
    {
        for(width = 0;width<razmer-pos;width++)
        {
            cout << " ";
        }
        for(width = 0;width<pos*2-1;width++)
        {
            cout << "*";
        }
    cout << endl;
    }
    for(pos = 1;pos<razmer;pos++)
        cout << " ";
    cout << "*";
    return 0;
}

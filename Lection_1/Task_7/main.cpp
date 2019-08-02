#include <iostream>

using namespace std;

int main()
{
    int razmer = 0;
    int stars = 1;
    cout << "VVedite razmer elochki: ";
    cin >> razmer;

    for (int i = 0;i<razmer;i++)
    {
        for(int width = 0;width<=razmer-i;width++)
        {
        cout << " ";
        }
       for(int g = 0;g<+stars;g++)
       {
        cout << "*";
       }
       stars+=2;
    cout << endl;
    }
    for(int i = 0;i<=razmer;i++)
        cout << " ";
    cout << "*";
    return 0;

}

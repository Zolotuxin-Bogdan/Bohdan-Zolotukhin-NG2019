#include <iostream>

using namespace std;

int main()
{
    char stroka[150], buffer;
    int i = 0;

    cout << "Vvedite stroky: ";
    cin.getline(stroka, 150);

    while (stroka[i]!='\0')
    {
        if (stroka[i]>=97 && stroka[i]<=122)
        {
            buffer = stroka[i]-32;
        }
        else
        {
            buffer = stroka[i];
        }
        cout << buffer;
        i++;
    }
    return 0;
}

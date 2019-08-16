#include <iostream>

using namespace std;

int main()
{
    char stroka[150];
    int kol_vo = 0;

    cout << "Vvedite stroky: ";
    cin.getline(stroka, 150);

    int i = 0;

    while (stroka[i]!='\0')
    {
        if (((stroka[i]>='a' && stroka[i]<='z') || (stroka[i]>='A' && stroka[i]<='Z'))
            && ((stroka[i+1]<'a' || stroka[i+1]>'z') && (stroka[i+1]<'A' || stroka[i+1]>'Z')))
            kol_vo++;
        i++;
    }
    cout << "Kol-vo slov: " << kol_vo;
    return 0;
}

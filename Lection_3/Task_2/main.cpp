#include <iostream>

using namespace std;

int main()
{
    char stroka[150];
    int dlina = 0, pos = 0, maxDlina = 0;

    cout << "Vvedite stroky: ";
    cin.getline(stroka, 150);

    int i = 0;

    while (stroka[i]!='\0')
    {
        if ((stroka[i]>='a' && stroka[i]<='z') || (stroka[i]>='A' && stroka[i]<='Z'))
            dlina++;
        if ((stroka[i+1]<'a' || stroka[i+1]>'z') && (stroka[i+1]<'A' || stroka[i+1]>'Z'))
        {
            if (dlina>maxDlina)
            {
                maxDlina=dlina;
                pos=i;
            }
            dlina = 0;
        }
        i++;
    }
    for (i=pos-maxDlina+1;i<=pos;i++)
    cout << stroka[i];
    return 0;
}

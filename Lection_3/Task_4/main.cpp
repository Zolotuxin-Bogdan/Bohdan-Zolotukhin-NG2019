#include <iostream>

using namespace std;

int main()
{
    char stroka[100];
    cout << "Vvedite stroky: ";
    cin.getline(stroka,100);

    char alphabet[26];
    int counter[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i = 0, i2 = 0;
    while (stroka[i]!='\0')
    {
        for(i2 = 0;i2<26;i2++)
        if((stroka[i] == 'a'+i2) || (stroka[i] == 'A'+i2))
        {
            alphabet[i2]='A'+i2;
            counter[i2]++;
        }
        i++;
    }

    char tempChar;
    int tempInt;

    for(i=0;i<26;i++)
        for(i2=0;i2<26-i-1;i2++)
        {
            if(counter[i2]<counter[i2+1])
            {
                tempChar = alphabet[i2];
                alphabet[i2]= alphabet[i2+1];
                alphabet[i2+1] = tempChar;
                tempInt = counter[i2];
                counter[i2] = counter[i2+1];
                counter[i2+1] = tempInt;
            }
        }

    for ( i = 0; i <26; i++)
    {
        if (counter[i]!=0)
        cout << alphabet[i] << " - " << counter[i] << endl;
    }
    return 0;
}

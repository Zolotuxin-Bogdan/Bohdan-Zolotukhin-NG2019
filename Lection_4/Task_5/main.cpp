#include <iostream>
#include <ctime>

using namespace std;

// random chisel v massive
void randomMassiv(int* arr, int razmer)
{
    srand( time( 0 ) );
    for(int i = 0;i<razmer;i++)
    {
        arr[i]=rand()%510-255;
    }
}

// Vozvrat MAX chisla
int maxNumber(int* arr, int razmer)
{
    int rezult = 0;
    for (int i = 0; i < razmer; ++i)
    {
        if (arr[i] > rezult)
        {
            rezult = arr[i];
        }
    }
    return rezult;
}

// Vozvrat MIN chisla
int minNumber(int* arr, int razmer)
{
    int rezult = 0;
    for (int i = 0; i < razmer; ++i)
    {
        if (arr[i] < rezult)
        {
            rezult = arr[i];
        }
    }
    return rezult;
}

// Proverka na chentost chisla
bool chet(int* arr, int razmer, int nom)
{
    {
        if(arr[nom-1]%2 == 0)
        {
            return true;
        }
        if(arr[nom-1]%2 != 0)
        {
            return false;
        }
    }
}

// Vse NEchetniy chisla ymnojenu na 2, a ot chetnix otnyato 1
void chetNeChetObrabotka(int* arr, int razmer)
{
    for(int i = 0;i<razmer;i++)
    {
        if(arr[i]%2 != 0)
        {
            arr[i]*=2;
        }
        else if(arr[i]%2 == 0)
        {
            arr[i]-=1;
        }
    }
}

// Obnylenie massiva
void nullArr(int* arr, int razmer)
{
    for(int i = 0;i<razmer;i++)
    {
        arr[i]=0;
    }
}

//Chislo v bykvy
void bykva(int chislo)
{
    char temp;
    if ((chislo >= 97 && chislo<=122) || (chislo>=65 && chislo<=90))
    {
        temp = chislo;
        cout << temp;
    }
    else
    {
        cout << chislo;
    }
}


int main()
{
    int razmer = 0;
    cout << "Vvedite jelaemiy razmer massiva: ";
    cin >> razmer;
    int massiv[razmer];
    randomMassiv(massiv,razmer);
    cout << "\n[ ";
    for (int i=0;i<razmer;i++)
    {
        cout << massiv[i]<<" ";
    }
    cout << "]\n\n\tMax number is " << maxNumber(massiv,razmer) << endl;
    cout << "\tMin number is " << minNumber(massiv,razmer) << endl;

    int nomer = 0;
    cout << "\nVvedite nomer elementa, kotoriy bydet proveren na chentost: ";
    cin >> nomer;

    if(nomer>=1 && nomer<=razmer)
    {
        cout << "\n\tElement #" << nomer << " \"" << massiv[nomer-1] << "\" is " << chet(massiv,razmer,nomer);
    }
    else
    {
        cout << "\nError! Vveden nepravilniy element...";
    }

    chetNeChetObrabotka(massiv,razmer);
    cout << "\n\nVse NEchetniy chisla ymnojenu na 2, a ot chetnix otnyato 1\n\n[ ";
    for (int i=0;i<razmer;i++)
    {
        cout<<massiv[i]<<" ";
    }
    cout << "]";

    cout << "\n\nMassiv obnylen...\n\n[ ";
    nullArr(massiv,razmer);
    for (int i=0;i<razmer;i++)
    {
        cout<<massiv[i]<<" ";
    }
    cout << "]";

    int chislo = 0;
    cout << "\n\nVvedite chislo: ";
    cin >> chislo;
    cout << "\nResult: ";
    bykva(chislo);
    return 0;
}

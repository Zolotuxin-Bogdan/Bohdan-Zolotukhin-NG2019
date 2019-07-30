#include <iostream>

using namespace std;

int main()
{
    float first_val,second_val = 0;
    int operatorr = 0;
    cout << "Vvedite pervoe chislo: ";
    cin >> first_val;
    cout << "Vvedite vtoroe chislo: ";
    cin >> second_val;
    cout << "Vvedite operator( 1.\'+\' 2.\'-\' 3.\'/\' 4.\'*\'):";
    cin >> operatorr;
    if (operatorr==1)
    cout << "Resultat: " << first_val + second_val << endl;
    if (operatorr==2)
    cout << "Resultat: " << first_val - second_val << endl;
    if (operatorr==3)
        if (second_val!=0)
    cout << "Resultat: " << first_val / second_val << endl;
        else
    cout << "Error! Delenie na 0 nevozmojno...\n\n";
    if (operatorr==4)
    cout << "Resultat: " << first_val * second_val << endl;
    if ((operatorr>4) || (operatorr<1))
    cout << "Error! Vveden nepravilnyi operator...\n\n";
    return 0;

}

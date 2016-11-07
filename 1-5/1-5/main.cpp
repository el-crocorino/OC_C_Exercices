#include <iostream>

using namespace std;

int main()
{

    //------- utilisation cin / cout------------------------------

    /*cout << "Quel âge avez-vous ? " << endl;

    int userAge(0);

    cin >> userAge;
    cout << "Vous avez déclaré avoir " << userAge << " ans." << endl;
    cin.ignore();

    cout << "Quel sont vos prénom et nom? " << endl;
    string userFirstName("No name");
    getline(cin, userFirstName);

    cout << "Combien vaut pi ? " << endl;
    double userPiValue(-1.);
    cin >> userPiValue;

    cout << "Vous avez déclaré vous appeler " << userFirstName << " et penser que pi vaut " << userPiValue << endl;*/

    //------- calculatrice basique------------------------------

    /*int a(5), b(8), result(0);

    result = a + b;

    cout << result;*/

    //------- exercice 1 ------------------------------

    /*double a(0), b(0);

    cout << "Veuillez entrer le premier chiffre :" << endl;
    cin >> a;

    cin.ignore();

    cout << "Veuillez entrer le second chiffre :" << endl;
    cin >> b;

    double const result( a + b);

    cout << a << " + " << b << " = " << result << endl;*/

    //------- exercice 2 ------------------------------

    /*double a(0), b(0);

    cout << "Veuillez entrer le premier chiffre :" << endl;
    cin >> a;

    cin.ignore();

    cout << "Veuillez entrer le second chiffre :" << endl;
    cin >> b;

    double const result( a * b);

    cout << a << " x " << b << " = " << result << endl;*/

    //------- exercice 3 ------------------------------

    /*double a(0), b(0), c(0);

    cout << "Veuillez entrer le premier chiffre :" << endl;
    cin >> a;

    cout << "Veuillez entrer le second chiffre :" << endl;
    cin >> b;

    cout << "Veuillez entrer le troisième chiffre :" << endl;
    cin >> c;

    double const result( a * b + c);

    cout << a << " x " << b << " + " << c << " = " << result << endl;*/


    //------- exercice 4 ------------------------------

    int a(0), b(0);

    cout << "Veuillez entrer le premier chiffre :" << endl;
    cin >> a;

    cout << "Veuillez entrer le second chiffre :" << endl;
    cin >> b;
    int const quotient(a / b);
    int const rest(a % b);

    cout << a << " / " << b << " = " << quotient << ", reste = " << rest << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{

    int userAge(16);
    cout << "L'age de l'utilisateur est: " << userAge << endl;

    int userQI(153);
    string userName("Albert Einstein");
    int& userQIRef(userQI);

    cout << "Vous vous appelez " << userName << " et votre QI est de " << userQI << " (via variable)" << endl;
    cout << "Vous vous appelez " << userName << " et votre QI est de " << userQIRef << " (via référence)" << endl;

    userQI++;

    cout << endl;
    cout << "Vous vous appelez " << userName << " et votre QI est de " << userQI << " (via variable)" << endl;
    cout << "Vous vous appelez " << userName << " et votre QI est de " << userQIRef << " (via référence)" << endl;

    return 0;
}

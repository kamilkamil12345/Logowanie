#include <iostream>

using namespace std;

int main()
{
    string login = "User1234", haslo = "qwerty1234!";
    cout << "Podaj Login" << endl;  cin >> login;
    cout << "Podaj Has�o" << endl;  cin >> haslo;

    if ((login == "User1234") && (haslo == "qwerty1234!"))
    {
        cout << "Uda�o si� zalogowa�." << endl;
    }
    else if ((login != "User1234") || (haslo != "qwerty1234!"))
    {
        cout << "Nieuda�o si� zalogowa�. Niepoprawny login lub has�o." << endl;
    }
    return 0;
}

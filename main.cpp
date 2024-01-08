#include <iostream>

using namespace std;

int main()
{
    string login = "User1234", haslo = "qwerty1234!";
    cout << "Podaj Login" << endl;  cin >> login;
    cout << "Podaj Has³o" << endl;  cin >> haslo;

    if ((login == "User1234") && (haslo == "qwerty1234!"))
    {
        cout << "Uda³o siê zalogowaæ." << endl;
    }
    else if ((login != "User1234") || (haslo != "qwerty1234!"))
    {
        cout << "Nieuda³o siê zalogowaæ. Niepoprawny login lub has³o." << endl;
    }
    return 0;
}

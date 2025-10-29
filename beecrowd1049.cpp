#include <iostream>
#include <string>
using namespace std;

int main() {
    string w1, w2, w3;
    cin >> w1 >> w2 >> w3;

    if (w1 == "vertebrado") {
        if (w2 == "mamifero") {
            if (w3 == "onivoro")
                cout << "homem" << endl;
            else if (w3 == "herbivoro")
                cout << "vaca" << endl;
        } else if (w2 == "ave") {
            if (w3 == "carnivoro")
                cout << "aguia" << endl;
            else if (w3 == "onivoro")
                cout << "pomba" << endl;
        }
    } else if (w1 == "invertebrado") {
        if (w2 == "inseto") {
            if (w3 == "hematofago")
                cout << "pulga" << endl;
            else if (w3 == "herbivoro")
                cout << "lagarta" << endl;
        } else if (w2 == "anelideo") {
            if (w3 == "hematofago")
                cout << "sanguessuga" << endl;
            else if (w3 == "onivoro")
                cout << "minhoca" << endl;
        }
    }

    return 0;
}


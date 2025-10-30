#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int X;
    cin >> X;

    int prime = 0;
    if (X < 2) {
        prime = 1;
    } else {
        for (int i = 2; i <= sqrt(X); i++) {
            if (X % i == 0) {
                prime = 1;
                break;
            }
        }
    }

    if (prime == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int time, speed;
    cin >> time >> speed;

    double distance = time * speed;
    double fuel = distance / 12.0;

    cout << fixed << setprecision(3);
    cout << fuel << endl;

    return 0;
}


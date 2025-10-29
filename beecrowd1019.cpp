#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int hours = N / 3600;
    N = N % 3600;

    int minutes = N / 60;
    int seconds = N % 60;

    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int num, maxNum = 0;

    for (int i = 0; i < N; i++) {
        cin >> num;
        if (i == 0 || num > maxNum) {
            maxNum = num;
        }
    }

    cout << maxNum << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        long long fact = 1;

        for (int j = 1; j <= N; j++) {
            fact = fact * j;
        }

        cout << fact << endl;
    }

    return 0;
}

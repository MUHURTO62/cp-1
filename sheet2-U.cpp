#include <bits/stdc++.h>
using namespace std;
int main(){

    int N, a, b, m = 0;
    cin >> N >> a >> b;
    for(int i = 1; i <= N; i++)
    {
        int s = 0;
        int temp = i;
        while(temp != 0)
        {
            s += temp % 10;
            temp /= 10;
        }
        if(a <= s && b >= s)
        {
            m += i;
        }
    }
    cout << m;

    return 0;
}

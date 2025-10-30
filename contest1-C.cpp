#include <iostream>
using namespace std;

int main(){
    int n, even = 0, odd = 0,posi = 0,neg = 0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
        if(arr[i]>0){
            posi++;
        }else if(arr[i]<0){
            neg++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " <<posi << endl;
    cout << "Negative: " <<neg << endl;

    return 0;
}

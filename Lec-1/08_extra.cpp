#include <bits/stdc++.h>
using namespace std;

// Arryay is the only collection that is pass by reference by DEFAULT.
void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "Value inside the Func: " << arr[0] << endl;
}

int main(){
    int n=5;
    int arr[n];
    for(int i = 0;i<n; i=i+1){
        cin >> arr[i];
    }

    doSomething(arr,n);
    cout << "Value inside int main: " << arr[0] << endl;

    // for(int i=0;i<=4;i=i+1){
    //     cout << arr[i] << " ";
    // }
    return 0;
}
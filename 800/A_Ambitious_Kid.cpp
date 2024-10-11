#include <iostream>
#include <limits.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int minV = INT_MAX;
    for (int i = 0; i < n; i++){
        int x;
        cin>>x;
        minV = min(minV,abs(x));
    }
    cout<<minV<<endl;
}
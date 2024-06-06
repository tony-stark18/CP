#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        int pi;
        cin>>pi;
        arr[pi-1]=i+1;
    }
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}
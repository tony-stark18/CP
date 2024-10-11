#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        // int arr[n];
        bool flag = false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==k){
                flag = true;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
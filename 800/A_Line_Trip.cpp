#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxD = arr[0];
        for(int i=1;i<n;i++){
            maxD = max(maxD,arr[i]-arr[i-1]);
        }
        maxD = max(maxD,(x-arr[n-1])*2);
        cout<<maxD<<endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector<int> &arr){
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]) return false;
    }
    return true;
}
bool check(vector<int> &arr,int n){
    if(isSorted(arr)) return true;
    if(arr[0]!=1) return false;
    bool flag = true;
    while(flag){
        bool flag2 = false; 
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                flag2 = true;
            }
        }
        flag = flag2;
    }
    if(isSorted(arr)) return true;
    return false;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(check(arr,n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
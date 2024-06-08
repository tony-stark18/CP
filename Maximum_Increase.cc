#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int prev = -1;
    int count = 0;
    int maxCount = 0;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(t>prev){
            count++;
            maxCount=max(maxCount,count);
        }
        else{
            count=1;
        }
        prev=t;
    }
    cout<<maxCount;
}
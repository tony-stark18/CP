#include <iostream>
using namespace std;

void soln(int a,int b,int n){
    int count=0;
    while(a<=n && b<=n){
        if(a<b){
            a+=b;
        }
        else{
            b+=a;
        }
        count++;
    }
    cout<<count<<endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,t;
        cin>>a>>b>>t;
        soln(a,b,t);
    }
    return 0;
}
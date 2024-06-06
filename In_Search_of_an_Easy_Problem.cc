#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag = true;
    for(int i=0;i<n;i++){
        int o;
        cin>>o;
        if(o)flag=false;
    }
    if(flag) cout<<"EASY";
    else cout<<"HARD";
    return 0;
}
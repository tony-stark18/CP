#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int tram = 0;
    int maxTram = 0;
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        tram+=v-u;
        maxTram=max(maxTram,tram);
    }
    cout<<maxTram;
}
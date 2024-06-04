#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int res = 0;
    while(n--){
        string s;
        cin>>s;
        if(s=="++X" || s=="X++") res++;
        if(s=="--X" || s=="X--") res--;
    }
    cout<<res;
    return 0;
}
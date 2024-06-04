#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        int dig =  s[i]-'0';
        if(i==0 && dig==9) continue;
        if(dig>=5) s[i] = '9'-s[i] + '0';
    }
    cout<<s;
    return 0;
}
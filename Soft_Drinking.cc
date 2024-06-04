#include <iostream>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int toastsUsingDrinks = (k*l)/nl;
    int toastsUingLime = c*d/1;
    int toastsUsingSalt = p/np;
    cout<<min(min(toastsUsingDrinks,toastsUingLime),toastsUsingSalt)/n;
    return 0;
}
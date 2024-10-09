#include <iostream>
#include <string>
using namespace std;

bool soln(string x, string s, int m, int n)
{
    if (m < n)
        return false;
    for (int i = 0; i <= m - n; i++)
    {
        string str = x.substr(i, n);
        if (str == s)
            return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;
        string x;
        cin >> x;
        string s;
        cin >> s;
        int count = 0;
        bool flag = false;
        while(true){
            if(soln(x,s,x.length(),n)) break;
            if(x.length()>100){
                flag = true;
                break;
            }
            count++;
            x+=x;
        }
        if(flag) cout<<-1<<endl;
        else cout<<count<<endl;
    }
    return 0;
}

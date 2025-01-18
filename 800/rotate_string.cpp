#include <iostream>
#include <string>
using namespace std;

bool match(string original, string pattern)
{
    original += original;
    if (original.find(pattern) != string::npos)
    {
        return true;
    }
    return false;
}

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    cout << match(s, t) << endl;
    return 0;
}
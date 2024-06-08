#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> vt;
    for (int i = 0; i < s.length(); i += 2)
    {
        vt.push_back(s[i] - '0');
    }
    sort(vt.begin(), vt.end());
    for (int i = 0; i < vt.size(); i++)
    {
        cout << vt[i];
        if (i != vt.size() - 1)
        {
            cout << "+";
        }
    }
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        if (s == "Tetrahedron")
            res += 4;
        if (s == "Cube")
            res += 6;
        if (s == "Octahedron")
            res += 8;
        if (s == "Dodecahedron")
            res += 12;
        if (s == "Icosahedron")
            res += 20;
    }
    cout << res;
    return 0;
}

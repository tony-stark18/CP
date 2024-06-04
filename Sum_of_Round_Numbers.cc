#include <iostream>
#include <vector>
using namespace std;

void helper(int n)
{
    vector<int> vt;
    int count = 0;
    while (n > 0)
    {
        int dig = n % 10;
        if (dig != 0)
        {
            int tres = 1;
            for (int i = 0; i < count; i++)
            {
                tres *= 10;
            }
            vt.push_back(dig * tres);
        }
        n /= 10;
        count++;
    }
    cout << vt.size() << endl;
    for (int it : vt)
    {
        cout << it << " ";
    }
    cout << endl; // Add a newline for better output formatting
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        helper(x);
    }
    return 0;
}

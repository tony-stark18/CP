#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if (a[0] == a[n - 1])
        {
            cout << -1 << endl;
        }
        else
        {
            int count = 1;
            for (int i = 1; i < n; i++)
            {
                if (a[i] == a[i - 1])
                    count++;
                else
                    break;
            }
            cout << count << " " << n - count << endl;
            for (int i = 0; i < count; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            for (int i = count; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        int ans = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                count++;
                if (count >= 3)
                {
                    cout << 2 << endl;
                    flag = true;
                    break;
                }
            }
            else
            {
                ans += count;
                count = 0;
            }
        }
        if (!flag)
        {
            cout << ans + count << endl;
        }
    }
    return 0;
}
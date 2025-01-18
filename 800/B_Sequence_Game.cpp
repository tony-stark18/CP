#include <iostream>
#include <vector>
using namespace std;

vector<int> solve(vector<int> &a)
{
    int n = a.size();
    vector<int> ans;
    ans.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            ans.push_back(a[i]);
            ans.push_back(a[i]);
        }
        else
        {
            ans.push_back(a[i]);
        }
    }
    return ans;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> ans = solve(a);
        cout << ans.size() << endl;
        for (int i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
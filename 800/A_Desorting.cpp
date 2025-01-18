#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

bool is_sorted(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
int calc_min_dif(vector<int> a)
{
    int min_dif = INT_MAX;
    for (int i = 0; i < a.size() - 1; i++)
    {
        min_dif = min(min_dif, a[i + 1] - a[i]);
    }
    return min_dif;
}
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
        if (!is_sorted(a))
        {
            cout << 0 << endl;
        }
        else
        {
            int min_df = calc_min_dif(a);
            cout << (min_df / 2) + 1 << endl;
        }
    }
    return 0;
}
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool soln(vector<int> &arr, int n)
{
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    if (freq.size() > 2)
        return false;

    if (freq.size() == 1)
        return true;

    auto it = freq.begin();
    int count1 = it->second;
    it++;
    int count2 = it->second;

    return abs(count1 - count2) <= 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (soln(arr, n))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}

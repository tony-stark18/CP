#include <iostream>
#include <vector>
using namespace std;

bool soln(vector<int> &arr, int n)
{
    int dist_1 = arr[0], dist_1_count = 1;
    int dist_2 = -1, dist_2_count = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == dist_1)
        {
            dist_1_count++; 
        }
        else if (dist_2 == -1)
        {
            dist_2 = arr[i];
            dist_2_count++; 
        }
        else if (arr[i] == dist_2)
        {
            dist_2_count++; 
        }
        else
        {
            return false; 
        }
    }

    if (dist_2_count == 0)
        return true;

    return abs(dist_1_count - dist_2_count) <= 1;
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

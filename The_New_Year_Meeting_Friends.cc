#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int arr[] = {x, y, z};
    sort(arr, arr + 3);
    int median = arr[1];
    int dist = abs(median - x) + abs(median - y) + abs(median - z);
    cout << dist;
    return 0;
}

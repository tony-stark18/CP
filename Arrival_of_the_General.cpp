// A.Arrival of the General
#include <iostream>
#include <limits.h>
    using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int minV = INT_MAX;
    int maxV = INT_MIN;
    int imin = 0;
    int imax = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i]<=minV){
            minV=arr[i];
            imin=i;
        }
        if(arr[i]>maxV){
            maxV=arr[i];
            imax=i;
        }
    }
    int count = 0;
    if(imin>imax){
        count=n-1-imin+imax;
    }
    if(imin<imax){
        count=n-1-imin+imax-1;
    }
    cout<<count;
    return 0;
}
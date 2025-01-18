#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Merge(vector<int> &arr, int low, int high, int mid)
{
    int temp[high - low + 1];
    int left = low;
    int right = mid + 1;
    int k = 0;
    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
        {
            temp[k] = arr[left];
            left++;
        }
        else
        {
            temp[k] = arr[right];
            right++;
        }
        k++;
    }
    while (left <= mid)
    {
        temp[k] = arr[left];
        left++;
        k++;
    }
    while (right <= high)
    {
        temp[k] = arr[right];
        right++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void MergeSort(vector<int> &nums, int left, int right)
{
    if (right == left)
    {
        return;
    }
    int mid = (left + right) / 2;
    MergeSort(nums, left, mid);
    MergeSort(nums, mid + 1, right);
    Merge(nums, left, right, mid);
}

int partition(vector<int> &arr, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void QuickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pindex = partition(arr, low, high);
        QuickSort(arr, low, pindex - 1);
        QuickSort(arr, pindex + 1, high);
    }
}

int main()
{
    cout << "\n\t\t\t\t\tWelcome to Sorting Saga.\n\t\t---------------------------------------------------------------------------------\n";
    cout << "\t\tEnter the size of the array: ";
    int n;
    cin >> n;
    cin.ignore();
    vector<int> arr;
    cout << "\n\t\tEnter n elements of your array, separated by white spaces: ";
    while (n--)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "\n\t\twhich sorting Algorithm do you wanna use to sort your array ? Enter (1) for MergeSort and Enter (2) for Quick Sort: ";
    int choice;
    cin >> choice;
    cin.ignore();
    return 0;
}
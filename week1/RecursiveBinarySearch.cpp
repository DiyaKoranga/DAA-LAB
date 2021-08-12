#include <iostream>
using namespace std;

int RecursiveBinarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            return RecursiveBinarySearch(arr, mid + 1, r, x);
        }
        else
        {
            return RecursiveBinarySearch(arr, l, mid - 1, x);
        }
    }
    return -1;
}

int main()
{
    int t, n, x;
    cout << "Input Number of test cases" << endl;
    cin >> t;
    int count = 0;
    for (int i = 0; i < t; i++)
    {
        cout << "Enter size of the array: " << endl;
        cin >> n;
        int arr[n];
        cout << "Enter the elements: " << endl;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        cout << "Input element to search" << endl;
        cin >> x;
        int l = 0, result = 0;
        int r = n;
        result = RecursiveBinarySearch(arr, l, r - 1, x);
        if (result == -1)
        {
            cout << "Not Present " << endl;
            ;
        }
        else
        {
            cout << "Present " << result << endl;
        }
    }
    return 0;
}
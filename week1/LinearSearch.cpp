#include <iostream>
using namespace std;

int main()
{
    int x, n, k;
    cout << "Input Number of test cases" << endl;
    cin >> x;
    int c = 0;

    for (int i = 0; i < x; i++)
    {
        cout << "enter the size of the array : "<<endl;
        cin >> n;
        int array[n];
        cout << "Enter elements please " << endl;
        for (int j = 0; j < n; j++)
        {
            cin >> array[j];
        }
        cout << "Input element to search" << endl;
        cin >> k;
        bool isFound = false;
        for (int j = 0; j < n; j++)
        {
            if (array[j] == k)
            {

                isFound = true;
                c++;
                break;
            }
        }
        if (isFound)
        {
            cout << "Present " << c << endl;
            
        }
        else
        {
            cout << "Not present " << endl;
        }
    }
}
// program to find the max time taken by the painters to paint the wall...
#include <iostream>
#include <vector>
#include <stdbool.h>
using namespace std;
bool is_valid(vector<int> &vec, int maxallowed, int painters)
{
    int m = 1, unit = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] > maxallowed)
            return false;
        if (vec[i] + unit <= maxallowed)
            unit += vec[i];
        else
        {
            unit = vec[i];
            m++;
        }
    }
    return m <= painters ? true : false;
}
int main()
{
    int n, sum = 0, ans = 0, m = 2; // m = number of painters]
    cout << "Enter the number of bords: ";
    cin >> n;
    cout << "Enter the number of painters: ";
    cin >> m;
    vector<int> arr(n);
    if (n < m)
    {
        cout << "number of painters should be greater than size of arr!!!";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << "enter the size of " << i + 1 << " board : ";
            cin >> arr[i];
        }
        for (int res : arr)
        {
            sum += res;
        }
        int st = arr[0], end = sum;
        while (st < end)
        {
            int mid = st + (end - st) / 2;
            if (is_valid(arr, mid, m))
            {
                end = mid - 1;
                ans = mid;
            }
            else
            {
                st = mid + 1;
            }
        }
        cout << "Maximum time taken by the painters is " << ans;
    }

    return 0;
}

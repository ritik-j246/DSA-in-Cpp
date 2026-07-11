#include <iostream>
#include <vector>
#include <stdbool.h>
using namespace std;
bool is_valid(vector<int> vec, int maximum_allow, int s)
{
    int student = 1, pages = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] > maximum_allow)
            return false;
        if (vec[i] + pages > maximum_allow)
        {
            pages = vec[i];
            student++;
        }
        else
        {
            pages += vec[i];
        }
    }
    return student <= s ? true : false;
}

int main()
{
    int n, k;

    cout << "Enter the number of books: ";
    cin >> n;

    cout << "Enter the number of students: ";
    cin >> k;

    vector<int> nums(n);
    int ans = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number of pages of " << i + 1 << " book:";
        cin>>nums[i];
    }

    if (k > n)
        cout << "Number of books should be greater than number of books.";
    else
    {
        for (int res : nums)
        {
            sum += res;
        }
        int st = 0, end = sum;
        while (st < end)
        {
            int mid = st + (end - st) / 2;
            if (is_valid(nums, mid, k))
            {
                end = mid - 1;
                ans = mid;
            }
            else
            {
                st = mid + 1;
            }
        }
        cout << ans;
    }
    return 0;
}
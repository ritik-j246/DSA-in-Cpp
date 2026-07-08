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
    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2, ans = 0, sum = 0;
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
    return 0;
}
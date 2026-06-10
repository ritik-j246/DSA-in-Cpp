#include <iostream>
#include <vector>
using namespace std;
void max_min_index(vector<int> &nums)
{
    int maxindex = 0, minindex = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[maxindex] < nums[i])
        {
            maxindex = i;
        }
        if (nums[minindex] > nums[i])
        {
            minindex = i;
        }
    }
    swap(nums[maxindex], nums[minindex]);
    cout << "After swapping " << endl;
    for (int res : nums)
    {
        cout << res << " ";
    }
}
int main()
{
    vector<int> vec = {1, 2, 3, 4};
    cout << "Before  Swapping " << endl;
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    max_min_index(vec);

    return 0;
}
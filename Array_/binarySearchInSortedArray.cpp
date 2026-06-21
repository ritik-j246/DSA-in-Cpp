#include <iostream>
#include <vector>
using namespace std;
int index(const vector<int> &nums,int target){
    int n = nums.size();
    int st = 0 , end = n-1, mid = 0 ; 
    while(st <= end){
        mid = (end + st)/2; 
        if(nums[mid] == target ) return mid;
        if(nums[mid] < target ) st =  mid+1; 
        if(nums[mid] > target ) end = mid-1;
    }
    
    
  
    return -1;;
}
    int main()
    {
        vector<int> nums = {-2,0,5,7};
        int target = 7;
        cout << " the target is at " << index(nums , target)<<" index"<<endl;
        return 0;
    }
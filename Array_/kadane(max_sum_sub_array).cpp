#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int max_sub_array(const vector<int> &nums){
    int sum=0,maxsum=INT_MIN;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        maxsum=max(maxsum,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxsum<<endl;

return 0;
}
int main(){
    vector<int> nums={1,6,4,-1};
    max_sub_array(nums);
    return 0;
}
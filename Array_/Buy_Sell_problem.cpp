#include<iostream>
#include<vector>
using namespace std;
int buy_sell(const vector<int> &nums){
    int maxprofit=0;
    for(int st=0;st<nums.size();st++){
        for(int end=st+1;end<nums.size();end++){
            if(nums[end]-nums[st]>0){
                maxprofit=max(maxprofit,nums[end]-nums[st]);
            }
        }
    }
    if(maxprofit==0){
        cout<<"-1";
    }else{
        cout<<maxprofit;
    }
    return 0;
}
int main(){
    vector<int> nums={7,4,1,3,5,6};
    buy_sell(nums);
    return 0;
}
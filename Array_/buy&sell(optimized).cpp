#include<iostream>
#include<vector>
using namespace std;
int buy_sell(const vector<int> &nums){
  int bestbuy=nums[0],profit=0;
  for(int sell=1;sell<nums.size();sell++){
    if(nums[sell]>bestbuy){
        profit=max(profit,nums[sell]-bestbuy);
    }
    bestbuy=min(bestbuy,nums[sell]);
  }
  cout<<profit;
  return 0;
}
int main(){
    vector<int> nums={7,4,1,3,5,6};
    buy_sell(nums);
    return 0;
}
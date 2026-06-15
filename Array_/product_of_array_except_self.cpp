#include<iostream>
#include<vector>
using namespace std;
int product( vector<int> &nums){
    vector<int> preffix(nums.size(),1);
    vector<int> suffix(nums.size(),1);
    vector<int> ans(nums.size(),1);
    for(int i = 1; i<nums.size() ; i++){
        preffix[i] = preffix[i-1] * nums[ i-1 ];

        ans[i]=ans[i]*preffix[i];
    }
    for(int j = nums.size()-2 ; j >= 0 ; j--){
        suffix[j] = nums[j+1] * suffix[j+1];
        ans[j]=suffix[j] * ans[j];
    }
   
    for(int result : ans){
        cout<<result<<" ";
    }

    
return 0;

}
int main(){
    vector<int> vec={1,2,3,4}; 
    product(vec);
}
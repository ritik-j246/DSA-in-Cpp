#include<iostream>
#include<vector>
using namespace std ;
void find_unique_number(const vector<int> &nums){
   
    vector<int> arr;
    for(int i=0;i<nums.size();i++){
         int count=0;
        for(int j=0;j<nums.size();j++){
            if(nums[i]==nums[j]){
                count++;
            }
        }
        if(count==1){
        arr.push_back(nums[i]);
                    }
    }
    
    
    for(int val:arr){
        cout<<val;
    }
   
}
int main(){
    vector<int> vec={1,2,1,2,5};
    find_unique_number(vec);
    return 0;

}
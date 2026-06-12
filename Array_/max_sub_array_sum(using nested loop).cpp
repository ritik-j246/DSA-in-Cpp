//find a maximum sub array sum;
#include<iostream>
#include<vector>
#include<string>

using namespace std;
int max_sub_array( vector<int> &nums){
    int maxsum=0;
    for(int i=0;i<nums.size();i++){
       int currsum=nums[i];
        for(int j=i+1;j<nums.size();j++){
            currsum+=nums[j];
            maxsum=max(currsum,maxsum);
        }
    }
cout<<maxsum<<endl;
return 0;
}
int main(){
    vector<int>vec={1,6,4,-1};
    max_sub_array(vec); 
    return 0; 
}
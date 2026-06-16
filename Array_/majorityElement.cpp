#include<iostream>
#include<vector>
using namespace std; 
int majorityElement( const vector<int> &nums ){
    int n = nums.size();
    for( int i = 0 ; i < n ; i++ ){
        int freq = 1 ;
        for(int j = i+1 ; j < n ; j++ ){
            if(nums[i]==nums[j]) freq++ ;  
        }
        if(freq > n/2 ) return nums[i];
    }
    return -1; 

}
int main(){
    vector<int> nums={1,2,3,1};
    cout<<" most repeted number is : " << majorityElement( nums );
    return 0 ; 
}
#include<iostream>
#include<vector>
using namespace std;
   int maxArea(vector<int>& height) {
     int water=0,maxwater=0;
     int st=0,end=height.size()-1;
     while(st<end){
        water=(end-st)*min(height[st],height[end]);
        maxwater=max(maxwater,water);
        height[st]>height[end]?end--:st++;
     }
     return maxwater;
    }
    int main(){
        vector<int> height={1,8,6,2,5,4,8,3,7};
        cout<<"Maximum water the container can hold is : "<<maxArea(height)<<endl;
        return 0;
    }
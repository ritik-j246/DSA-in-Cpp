#include<iostream>
#include<vector>
using namespace std;
int find_unique_number(vector<int> &nums){
    int number=0;
    for(int res: nums){
        number^=res;
        
    }
    return number;

}
int main(){
    vector<int>vec={1,2,3,1,2};
    cout<<find_unique_number(vec);
    return 0;
}
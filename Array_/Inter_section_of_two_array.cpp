#include<iostream>
#include<vector>
using namespace std;
void find_intersection(const vector<int>&vec1,const vector<int>&vec2){
        vector<int> vec;
    for(int i=0;i<vec1.size();i++){
        for(int j=0;j<vec2.size();j++){
            if(vec1[i]==vec2[j]){
                vec.push_back(vec1[i]);
                break;
            }
        

        }
    }
    for(int val:vec){
        cout<<val<<endl;
    }

}
int main(){
    vector<int> vec1={1,4,4,5};
    vector<int> vec2={0,4,8,7};
    find_intersection(vec1,vec2);
    return 0;
}
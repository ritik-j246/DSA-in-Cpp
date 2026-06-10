#include<iostream>
#include<vector>
using namespace std;
void display(int sum, int product ){
        cout<<"Sum of the array is : "<<sum<<endl;
        cout<<"Product of array is : "<<product;
    }
void sum_product(const vector<int> &vec){
    int sum=0,product=1;
    for(int res:vec){
        sum+=res;
        product*=res; 
    }
    display(sum,product);
}
 
int main(){
    vector<int> vec={1,2,3,4};
     sum_product(vec);
     return 0;
}
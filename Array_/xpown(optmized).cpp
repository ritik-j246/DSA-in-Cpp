#include<iostream>
#include<climits>
using namespace std ;
int calculate_x_pow_n(int x,int n){
    int binform=n,ans=1;
    while(binform>0){
        if(binform==1){
            ans*=x;
        }
        x*=x;
        binform/=2;
    }
    return ans;

}
int main(){
    int x=5,y=2;
    cout<<calculate_x_pow_n(x,y);
    return 0;

}
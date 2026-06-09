#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i =0;i<n;i++){
        for(int j=0;j<i+1;j++){
         if((i+j)%2==0){
            cout<<1;
         } else{
            cout<<0;
         }
    
        }
        cout<<endl;
    }
    return 0; 
}
#include<iostream>
using namespace std;
int main(){
    int n ; 
    cout<<"Enter a number : ";
    cin>>n;
    for(int i =0;i<n;i++){
        for(int j=0; j<n-i-1;j++){
           cout<<" ";
        }
        if(i==0){
            cout<<"*";
        }else{
            cout<<"* *";
        }
        
        cout<<endl;    }
        for(int i =0;i<n;i++){
            for(int j=i+1;j<n;j++){
                cout<<" ";
            }
            if(i==n-1){
                cout<<"*";

            }else{
                cout<<"* *";
            }
            cout<<endl;
        }
        return 0;
     }
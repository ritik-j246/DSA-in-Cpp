#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int> vec={1,2,3,4,5};
   int i = 0, j = vec.size()-1;
   while( j > i ){
  //# can be done by using any swap function also =
    // int temp = vec[i];
    // vec[i] = vec[j] ;
    // vec[j] = temp ;
    swap(vec[i],vec[j]);
    j-- ; i++ ;
   }
   for(int res : vec){
    cout<< res ; 
   }
   return 0;
                
}


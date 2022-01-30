#include<iostream>
using namespace std;

 int main(){
     int toyCount(int N, int K, vector<int> arr){
         int sum = 0;
         sort(arr.begin(), arr.end());
         for(int i=0; i<N; i++){
             sum += arr[i];
             if(sum > k)
               return i;
         }
         return N;
     }
 }
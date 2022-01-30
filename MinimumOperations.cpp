#include<iostream>
using namespace std;

int main(){
    int minOperation(int n){
        int ans=0;

        // run in opposite way
        while(n>0){
            // for odd subtract -1
            if(n%2)
              ans++; n--;

            //Base case  
            if(n==0)
               break;
            
            // for even divide by 2 
            n/=2; ans++;
        }
        return ans;
    }
}
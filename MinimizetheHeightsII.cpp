#include<iostream>
using namespace std;

int main(){

     public:
    int getMinDiff(int arr[], int n, int k) {
        //sort the arr
        sort(arr, arr+n);
        
        //ans initialization
        int ans = arr[n-1] - arr[0];
        
        for(int i=1; i<n; i++)
        {
            // 2 choose available either + k or -k.
            int maax= max(arr[i-1]+k, arr[n-1]-k);
            int mini= min(arr[0] +k, arr[i]-k);
            
            // edge case
            if(mini < 0)
              continue;
            ans = min(ans, maax-mini);
        }
        return ans;
    }
}
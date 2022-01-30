#include<iostream>
using namespace std;


// In Moore Majority Voting Algorithm,

// When the elements are the same as the candidate element, votes are incremented when some other element is found not equal to the candidate element. We decreased the count. This actually means that we are decreasing the priority of winning ability of the selected candidate, since we know that if the candidate is a majority it occurs more than N/2 times and the remaining elements are less than N/2. We keep decreasing the votes since we found some different element than the candidate element. When votes become 0, this actually means that there are the same number of different elements, which should not be the case for the element to be the majority element.
// So the candidate element cannot be the majority, so we choose the present element as the candidate and continue the same till all the elements get finished. The final candidate would be our majority element. We check using the 2nd traversal to see whether its count is greater than N/2. If it is true, we consider it as the majority element.

// In the following Solution, maj variable keeps track of the current majority element, and count keeps its count.
// We initialize maj as nums[0] (first element of the given array) and we start checking from nums[1] till the end of the array. If we find nums[i] same as the maj, we increment its count and decrement it if nums[i] is not same as maj. And when count reaches 0, we update maj as current nums[i].

// For Example,
// If nums=[1,1,1,2,2,2,2]

// The maj and count after each iteration will be,

// Major : 1 	Count : 1
// Major : 1 	Count : 2
// Major : 1 	Count : 3
// Major : 1 	Count : 2
// Major : 1 	Count : 1
// Major : 1 	Count : 0
// Major : 2 	Count : 1

int main(){
   int majorityElement(vector<int>& nums) {
       int freq=1, maj= nums[0]; //Initialization
       for(int i=0; i<nums.size(); i++){
           if(count == 0 ){ maj=nums[i]; freq++; }
           else if(maj == nums[i]) freq++;
           else freq--;
       }
       return maj; 
       }

}
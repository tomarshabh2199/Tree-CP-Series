#include<iostream>
using namespace std;


/*  Codeforces Round #769 (Div. 2)
Recently, the students of School 179 have developed a unique algorithm, which takes in a binary string s as input. However, they soon found out that if some substring t of s is a palindrome of length greater than 1, the algorithm will work incorrectly. Can the students somehow reorder the characters of s so that the algorithm will work correctly on the string?

A binary string is a string where each character is either 0 or 1.

A string a is a substring of a string b if a can be obtained from b by deletion of several (possibly, zero or all) characters from the beginning and several (possibly, zero or all) characters from the end.

A palindrome is a string that reads the same backwards as forwards.

For each test case, print YES (case-insensitive) if it is possible to reorder the characters of s so that there are no substrings that are a palindrome of length greater than 1, or NO (case-insensitive) otherwise.

*/

int main(){

    int t=1;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        if(s.size()<2)
          cout<<"YES"<<endl;
        else if(s.size()==2)
        {
            if(s == "11" || s == "00")
              cout<<"NO"<<endl;
            else
               cout<<"YES"<<endl;
        }
        else
           cout<<"NO"<<endl; 
    }
    return 0;
}
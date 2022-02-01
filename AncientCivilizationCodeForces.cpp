#include<iostream>
using namespace std;

/*
Martian scientists explore Ganymede, one of Jupiter's numerous moons. Recently, they have found ruins of an ancient civilization. The scientists brought to Mars some tablets with writings in a language unknown to science.

They found out that the inhabitants of Ganymede used an alphabet consisting of two letters, and each word was exactly ℓ letters long. So, the scientists decided to write each word of this language as an integer from 0 to 2ℓ−1 inclusively. The first letter of the alphabet corresponds to zero bit in this integer, and the second letter corresponds to one bit.

The same word may have various forms in this language. Then, you need to restore the initial form. The process of doing it is described below.

Denote the distance between two words as the amount of positions, in which these words differ. For example, the distance between 10012 and 11002 (in binary) is equal to two, as these words have different letters in the second and the fourth positions, counting from left to right. Further, denote the distance between words x and y as d(x,y).

Let the word have n forms, the i-th of which is described with an integer xi. All the xi are not necessarily different, as two various forms of the word can be written the same. Consider some word y. Then, closeness of the word y is equal to the sum of distances to each of the word forms, i. e. the sum d(xi,y) over all 1≤i≤n.

The initial form is the word y with minimal possible nearness.

You need to help the scientists and write the program which finds the initial form of the word given all its known forms. Note that the initial form is not necessarily equal to any of the n given forms.

Input
The first line contains an integer t (1≤t≤100) — the number of test cases. The following are descriptions of the test cases.

The first line contains two integers n and ℓ (1≤n≤100, 1≤ℓ≤30) — the amount of word forms, and the number of letters in one word.

The second line contains n integers xi (0≤xi≤2ℓ−1) — word forms. The integers are not necessarily different.

Output
For each test, print a single integer, the initial form of the word, i. e. such y (0≤y≤2ℓ−1) that the sum d(xi,y) over all 1≤i≤n is minimal possible. Note that y can differ from all the integers xi.

If there are multiple ways to restore the initial form, print any.

Example
inputCopy
7
3 5
18 9 21
3 5
18 18 18
1 1
1
5 30
1 2 3 4 5
6 10
99 35 85 46 78 55
2 1
0 1
8 8
5 16 42 15 83 65 78 42
outputCopy
17
18
1
1
39
0
2
Note
In the first test case, the words can be written as x1=100102, x2=010012 and x3=101012 in binary. Let y=100012. Then, d(x1,y)=2 (the difference is in the fourth and the fifth positions), d(x2,y)=2 (the difference is in the first and the second positions), d(x3,y)=1 (the difference is in the third position). So, the closeness is 2+2+1=5. It can be shown that you cannot achieve smaller closeness.

In the second test case, all the forms are equal to 18 (100102 in binary), so the initial form is also 18. It's easy to see that closeness is equal to zero in this case.


*/
int main(){
    int t=1;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n], answer=0;
        for(int i=0;i<n;i++)
           cin>> a[i];
           for(int i=0; i<k;i++){
               int count =0;
               for(int j=0; j<n;j++)
               {
                   if(a[j] & (1<<i))
                     count++;
               }
               if(count> n-count)
                  answer+=(1<<i);
           }
           cout<<answer<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

bool Compare(pair<int,int> p1, pair<int,int>p2)
{
    if(p1.second == p2.second)
       return p1.first > p2.first;
    return p1.second < p2.second;
}

int main(){
   public:
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> meetings;
       
        for(int i=0; i<n; i++){
           meeting.push_back({start[i], end[i]});
        }

         sort(meeting.begin(), meetings.end(), Compare);

         int answer=1, dest=meetings[0].second;

         for(int i=0; i<n; i++){
             if(meetings[i].first>dest){
                 answer++;
                 dest= meetings[i].second;
             }
         }
         return answer;
    }
}
#include <bits/stdc++.h>
using namespace std;
struct meeting 
{
   int start;
   int end;
   int pos;
};
   bool  comparator(struct meeting m1, meeting m2) 
   {
     if (m1.end < m2.end) return true;
     return false;
   }
   void maxMeetings(int s[], int e[], int n) 
   {
      struct meeting meet[n];
      for (int i = 0; i < n; i++) 
      {
         meet[i].start = s[i];
         meet[i].end = e[i];
         meet[i].pos = i + 1;
      }
      sort(meet, meet + n, comparator);
      vector<int> answer;
      int limit = meet[0].end;
      answer.push_back(meet[0].pos);
      for (int i = 1; i < n; i++) 
      {
         if (meet[i].start > limit) 
         {
            limit = meet[i].end;
            answer.push_back(meet[i].pos);
         }
      }
      cout<<"The order in which the meetings will be performed is "<<endl;
      for (int i = 0; i < answer.size(); i++) 
      {
         cout << answer[i] << " ";
      }
   }
int main() 
{
   int n = 6;
   int start[] = {0,3,1,5,5,8};
   int end[] =   {5,4,2,9,7,9};
   maxMeetings(start, end, n);
   return 0;
}

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& ni) 
{
    int n=a.size();
    vector<vector<int>> ans;
    int i=0;
    while(i<n && a[i][1]<ni[0])// WE WILL GET THE LEFT PART [1,2] [3,4]
    {
        ans.push_back(a[i]);
        i++;
    }
    while(i<n && a[i][0]<=ni[1])
    {
        ni[0]=min(ni[0],a[i][0]);
        ni[1]=max(ni[1],a[i][1]);
        i++;
    }
    ans.push_back(ni);
    while(i<n)
    {
        ans.push_back(a[i]);
        i++;
    }
    return ans;
}
int main()
{
   vector<vector<int>>intervals;
   intervals.push_back({1,2});
   intervals.push_back({3,4});
   intervals.push_back({6,7});
   intervals.push_back({8,10});
   intervals.push_back({12,16});
   
   vector<int>newInterval;
   newInterval.push_back(5);
   newInterval.push_back(8);
   
   intervals = insert(intervals,newInterval);
   for(int i=0;i<intervals.size();i++)
   {
       cout<<"["<<intervals[i][0]<<","<<intervals[i][1]<<"]"<<" ";
   }
   return 0;
}

TC IS O(N)
SC IS O(N)


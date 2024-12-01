
/*     __QUESTION__

Assume you are an awesome parent and want to give your
children some cookies. But, you should give each child
at most one cookie.

Each child i has a greed factor g[i],
which is the minimum size of a cookie that the 
child will be content with; and each cookie j 
has a size s[j]. If s[j] >= g[i], we can assign 
the cookie j to the child i, and the child i will 
be content. Your goal is to maximize the number of
your content children and output the maximum number.
  
GREED=[1 5 3 3 4]    S=[4 2 1 2 1 3]
       4 X 3 X X
GREED=[1 5 3 3 4]    S=[4 2 1 2 1 3]       
       1 X 3 4 X
GREED=[1 5 3 3 4]    S=[4 2 1 2 1 3]
       
    MAX ANSWER IS 3
    
      __PROCESS__

SORTING BOTH

[1 1 2 2 3 4]   [1 3 3 4 5]

USING 2 POINTERS

*/




#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	int l=0,r=0;
	while(l<m)
	{
		if(b[l]>=a[r])
		{
			r++;
		}
		l++;
	}
	cout<<r<<endl;
	return 0;
}
/*TC IS O(NLOGN+MLOGM+M)
SC IS O(1)
*/



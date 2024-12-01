/*#include<bits/stdc++.h>
using namespace std;
int jump(int ind,int jumps,int a[],int n)
{
	if(ind>=n-1)
	{
		return jumps;
	}
	int mini=INT_MAX;
	for(int i=1;i<=a[ind];i++)
	{
		mini=min(mini,jump(ind+i,jumps+1,a,n));
	}
	return mini;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<jump(0,0,a,n);
	return 0;
}
TC IS O(N^N)
SC IS O(N)*/










#include<bits/stdc++.h>
using namespace std;
int jump(int a[],int n)
{
	int jumps=0;
	int l=0,r=0;
	while(r<n-1)
	{
		int fartest=0;
		for(int ind=l;ind<=r;ind++)
		{
			fartest=max(ind+a[ind],fartest);
		}
		l=r+1;
		r=fartest;
		jumps++;
	}
	return jumps;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<jump(a,n);
	return 0;
}
TC IS O(N)
SC IS O(1)


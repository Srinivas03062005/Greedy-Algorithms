/*COINS[]={1,2,5,10,20,50,100,500,1000}
V=29
V=87*/
/*COINS[]={1,2,5,10,20,50,100,500,1000}
V=29
V=87*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	int denom[]={1,2,5,10,20,50,100,500,1000};
    int length = sizeof(denom)/sizeof(denom[0]);
	for(int i=length-1;i>=0;i--)
	{
		while(n>=denom[i])
		{
			n=n-denom[i];
			v.push_back(denom[i]);
		}
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}

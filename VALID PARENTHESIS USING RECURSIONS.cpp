/*#include<bits/stdc++.h>
using namespace std;
bool func(string s,int ind,int count)
{
    if(count<0)
    {
        return false;
    }
    if(ind==s.size())
    {
        if(count==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if(s[ind]=='(')
    {
         func(s,ind+1,count+1);
    }
    else if(s[ind]==')')
    {
         func(s,ind+1,count-1);
    }
    else if(s[ind]=='*')
    {
         func(s,ind+1,count+1);
         func(s,ind+1,count-1);
         func(s,ind+1,count);
    }
}
int main()
{
    string s;
    cin>>s;
    cout<<func(s,0,0);
    return 0;
}
TC IS O(3^N)
SC IS O(N)
*/

#include<bits/stdc++.h>
using namespace std;
bool paren(string s)
{
	int min=0,max=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(')
		{
			min++;
			max++;
		}
		else if(s[i]==')')
		{
			min--;
			max--;
		}
		else if(s[i]=='*')
		{
			min--;
			max++;
		}
		if(min<0)
		{
			min=0;
		}
		if(max<0)     // EXAMPLE TEST CASE FOR THIS CONDITION -> ) -1,-1  ->  0,-1 SO TRUE BUT NOT SO IF MAX<0 THEN RETURN FALSE  
		{
			return false;
		}
	}
	return (min==0);
}
int main()
{
	string s;
	cin>>s;
	cout<<paren(s);
	return 0;
}

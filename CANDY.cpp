/*    ** EACH CHILD->ATLEAST ONE CANDY
    ** CHILDREN WITH HIGHER RATING HAS>NEIGHBOUR
    ARR=[1 2 3]
         1 2 3 L
         1 2 3 R
    MAX= 1 2 3  ADD = 6
    
   ARR=[1 3 2 1]
        1 2 1 1
        1 3 2 1
   MAX= 1 3 2 1  ADD = 7
   
   
   ARR = [0 2 4 3 2 1 1 3 5 6 4 0 0]
          1 2 3 1 1 1 1 2 3 4 1 1 1
          1 1 4 3 2 1 1 1 1 3 2 1 1
  MAX=    1 2 4 3 2 1 1 2 3 4 2 1 1 ADD = 27
  */
  
  
/*#include<bits/stdc++.h>
using namespace std;
int candy(int a[],int n)
{
	int left[n],right[n];
	left[0]=1;
	right[n-1]=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[i-1])
		{
			left[i]=left[i-1]+1;
		}
		else
		{
			left[i]=1;
		}
	}
	for(int i=n-2;i>=0;i--)
	{
		if(a[i]>a[i+1])
		{
			right[i]=right[i+1]+1;
		}
		else
		{
			right[i]=1;
		}
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+max(left[i],right[i]);
	}
	return sum;
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
	cout<<candy(a,n);
	return 0;
}
TC IS O(3N)
SC IS O(2N)
*/


/*#include<bits/stdc++.h>
using namespace std;
int candy(int a[],int n)
{
	int left[n];
	left[0]=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[i-1])
		{
			left[i]=left[i-1]+1;
		}
		else
		{
			left[i]=1;
		}
	}
	int current=1,right1=1;
	int sum=max(1,left[n-1]);
	for(int i=n-2;i>=0;i--)
	{
		if(a[i]>a[i+1])
		{
			current=right1+1;
			right1=current;
		}
		else
		{
			current=1;
			right1=1;
		}
		sum=sum+max(current,left[i]);
	}
	return sum;
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
	cout<<candy(a,n);
	return 0;
}
TC IS O(2N)
SC IS O(N)
*/






     //SLOPE APPROACH

#include<bits/stdc++.h>
using namespace std;
int candyslope(int a[],int n)
{
	int sum=1,i=1;
	while(i<n)
	{
		if(a[i]==a[i-1])
		{
			sum=sum+1;
			i++;
			continue;
		}
		int peak=1;
		while(i<n && a[i]>a[i-1])
		{
			peak+=1;
			sum+=peak;
			i++;
		}
		int down=1;
		while(i<n && a[i]<a[i-1])
		{
			sum+=down;
			i++;
			down++;
		}
		if(down>peak)
		{
			sum=sum+(down-peak);
		}
	}
	return sum;
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
	cout<<candyslope(a,n);
	return 0;
}
TC IS O(N)
SC IS O(1)


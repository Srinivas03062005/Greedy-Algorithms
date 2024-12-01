/*    YOU WILL BE GIVEN N PROCESSES AND EVERY PROCESS EXECUTION TIME IS KNOWN TO YOU
    [4,3,7,1,2]
    AND NOW OUR TASK IS TO COMPUTE AVERAGE WEIGHTING TIME FOR ALL THE PROCESSES FOLLOWING THE SHORTEST JOB FIRST ALGORITHM
    Q.WHAT IS SJF ALGORITHM?
    A.SCHEDULING POLICY THAT SELECTS THE WAITING PROCESS WITH THE SMALLEST EXECUTION TIME TO EXECUTE NEXT.
    
    
    [4 ,3 ,7 ,1 ,2 ]
     P1 P2 P3 P4 P5
    
    0--1--3--6--10--17
     P4 P5 P2 P1 P3
     
     FOR P4 THE WAITING TIME IS 0
     FOR P5 THE WAITING TIME IS 1
     FOR P2 THE WAITING TIME IS 3
     FOR P1 THE WAITING TIME IS 6
     FOR P3 THE WAITING TIME IS 10
                               ____
                                20
                               ____
    AVERAGE WILL BE 20/5(PROCESSES)=4
    */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int t=0,wttime=0;
	for(int i=0;i<n;i++)
	{
		wttime=wttime+t;
		t=t+a[i];
	}
	cout<<wttime/n<<endl;
   return 0;	
}
/*TC IS O(N)+O(NLOGN)
SC IS O(1)*/


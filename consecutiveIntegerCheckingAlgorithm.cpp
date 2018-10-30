#include<iostream>
using namespace std;
int main()
{
	int m=-1;
	int n=-1;
	cin>>m;
	cin>>n;
	if(m<0 ||n <0)
	{
		printf("Usage: commandLine.exe m n %s( where m & n are non-zero, non-negative integers)\n","\n");
		return 0;
	}
	if(m ==0 && n==0)
	{
		printf("gcd(0,0) is undefined \n");
		return 0;
	}
	int t;
	if ( m > n ) 
	{
		t = n;
	}
	else
	{
		t = m;
	} 
	while(t!=0)
	{
		if((m%t)==0)
		{
			if((n%t)==0) 
			{
				printf("gcd( %d , %d ) is %d \n",m,n,t);
				return 0;
			}

		} 
		t--;
	}
	return 0;
}

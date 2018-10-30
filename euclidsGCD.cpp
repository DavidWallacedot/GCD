#include <iostream>
using namespace std;
int gcd(int m, int n)
{
	if (n==0) return m;
	return gcd( n , m % n);
} 



int main()
{

	int firstNum=-1;
	int secondNum=-1;
	cin>> firstNum;
	cin>> secondNum;
	if(firstNum ==0 && secondNum ==0) 
	{
		cout<<"gcd(0,0) is undefined"<<endl;
		return 0;
	}
	if(firstNum <=-1 || secondNum <=-1)
	{
		printf("Usage: commandLine.exe m n %s( where m & n are non-zero, non-negative integers)\n","\n");		
		return 0;
	}
	int GCD = gcd(firstNum,secondNum);
	printf("gcd(%d,%d) is %d \n",firstNum,secondNum,GCD);	
	
}

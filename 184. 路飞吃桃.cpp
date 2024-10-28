#include<iostream>
using namespace std;
int f(int a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		return 2*(f(a-1)+1);	
	}
}
int main()
{
	int a;
	cin>>a;
	cout<<f(a);
}

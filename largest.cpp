#include<iostream>
using namespace std;
int main()
{
	int large;
	int num1,num2,num3;
	
	cout<<"Enter 3 numbers ";
	cin>>num1>>num2>>num3;
	
	if(num1==num2&&num1==num3)
	{
		cout<<"\nThe largest number is "<<num1;
	}
	
	if(num1==num2&&num1>num3)
	{
		cout<<"\nlargest number is "<<num1;
	}
	
	
	if(num2==num3&&num2>num1)
	{
		cout<<"\nlargest number is "<<num2;
	}
	
	if(num1>num2&&num1>num3)
	{
		large=num1;
	}
	else
	{
		if(num2>num1&&num2>num3)
		{
			large=num2;
		}
		else
		{
			large=num3;
		}
	}
	
	cout<<"Largest number is "<<large;
}

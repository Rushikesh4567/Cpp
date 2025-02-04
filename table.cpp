#include<iostream>
using namespace std;
int main()
{
	int i=1,num;
	cout<<"Enter a number ";
	cin>>num;
	
	cout<<"Multiplication table is"<<endl;
	while(i<=10)
	{
		cout<<i*num<<endl;
		i++;
	}
}

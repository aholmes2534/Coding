#include <iostream>
using namespace std;
class NUMBER
{
	private:
	short unsigned int num;
	int temp,rev,x;

	public:
	NUMBER(short unsigned int n);

};
NUMBER::NUMBER(short unsigned int n)
{
	num=n;
	if(num<0)
	{
		cout<<"Kindly enter a positive number only"<<endl;
	}
	else
	{
		rev=0;
		temp=num;
		while(temp!=0)
		{
			x=temp%10;
			rev=(10*rev)+x;
			temp/=10;
		}
	}
	if(rev==num)
	{
		cout<<"palindrome"<<endl;
	}
	else
	{
		cout<<" not palindrome"<<endl;
	}
}
int main()
{
	int m;
	cout<<"Enter a number"<<endl;
	cin>>m;
	NUMBER x1(m);
	
	
	
}

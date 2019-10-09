#include<iostream>

class matrix
{
	private:
	int a[50][50],b[50][50],c[50][50],m,n,p,q,i,j,k;
	
	public:
	void in1();
	void out1();
	void cross();
}x;
void matrix::in1()
{
	cout<<"Enter the number of rows and columns for the 1st matrix"<<endl;
	cin>>m;
	cin>>n;
	cout<<"Enter the number of rows and columns for the 2nd matrix"<<endl;
	cin>>p;
	cin>>q;
	
	if(p!=n)
	{
		cout<<"Multiplication not possible. Please re enter your parameters"<<endl;
	}
	else
	{
		cout<<"Enter the elements of the first matrix"<<endl;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		cout<<"Enter the elements of the second matrix"<<endl;
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				cin>>b[i][j];
			}
		}
	}
}
void matrix::cross()
{
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=0;
				for(k=0;k<n;k++)
				{
					c[i][j]=a[i][k]*b[k][j]+c[i][j];
				}
			}
		}
}
void matrix::out1()
{
	cout<<"The first matrix"<<endl;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<a[i][j]<<"\t";
			}
			cout<<endl;
		}
		cout<<"The second matrix"<<endl;
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				cout<<b[i][j]<<"\t";
			}
			
			cout<<endl;
		}
	cout<<"The resultant matrix product is"<<endl;
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				cout<<c[i][j]<<"\t";
			}
			
			cout<<endl;
		}
}
int main()
{
	x.in1();
	x.cross();
	x.out1();
}

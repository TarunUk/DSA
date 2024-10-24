#include<iostream>
using namespace std;
int main()
{
	int a[5], size, i;
	cout<<"Enter the size of array: ";
	cin>>size;
	cout<<"Enter the elements: ";
	
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for (i=0;i<size;i++)
	{
		cout<<a[i];
	}
}

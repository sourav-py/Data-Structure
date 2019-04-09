#include <iostream>
using namespace std;

int main()
{
	
	int arr[5],k,x,i,temp;
	
	cout<<"Enter 5 numbers "<<endl;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Initial array"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
		cout<<endl;	
	}
	
	cout<<"Enter number of rotations"<<endl;
	cin>>x;
	
	//rotation
	for(k=0;k<x;k++)
	{
		temp = arr[0];
		for(i=0;i<4;i++)
		{
			arr[i]=arr[i+1];
		}
		arr[4]=temp;
	}

	//after rotation
	
	cout<<"Final array "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
	
	
	
	
}

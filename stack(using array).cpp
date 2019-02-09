#include <iostream>
using namespace std;
int push(int a,int ,int arr[]);
int pop(int arr[],int );
int main()
{
	int y=0,x,i;
	static int s_counter = 0;
	int s[10];
	main:
	cout<<"~~~~~~~~~~~~"<<endl;
	cout<<"current stack"<<endl;
	for(i=0;i<s_counter;i++)
	{
		cout<<s[i]<<" ";
	}
	cout<<endl;
	
	
	cout<<"Press 1 to push  or 2 to pop "<<endl;
	cin>>x;
	switch(x)
	{
		case 1:
			int z;
			cout<<"Enter number to add"<<endl;
			cin>>z;
			s_counter += push(z,s_counter,s);
			
		
			goto main;
		case 2:
			s_counter -= pop(s,s_counter);
			goto main; 
	}
	for(i=0;i<s_counter;i++)
	{
		cout<<s[i]<<endl;
	}
	
	return 0;	
}

int push(int a,int b,int arr[])
{
	
	int i;
    arr[b] = a;
	return 1;
	
}

int pop(int arr[],int b)
{
	if(b>0)
	{
		int i;
		cout<<"item popped ";
		cout<<arr[b-1]<<endl;
		return 1;
	}
	
	else
	{
		cout<<"no more member items."<<endl<<endl;
	}

}
	


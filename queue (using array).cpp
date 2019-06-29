#include <iostream>
using namespace std;
int add(int,int,int arr[]);
int deque(int arr[],int);
int main()
{
	
	int y=0,x,i;
	static int q_counter = 0;
	int q[10];
	main:
	cout<<"current queue"<<endl;
	for(i=0;i<q_counter;i++)
	{
		cout<<q[i]<<" ";
	}
	cout<<endl;
	
	
	cout<<"Press 1 or 2 "<<endl;
	cin>>x;
	switch(x)
	{
		case 1:
			int z;
			cout<<"Enter number to add"<<endl;
			cin>>z;
			q_counter += add(z,q_counter,q);
			
		
			goto main;
		case 2:
			q_counter -= deque(q,q_counter);
			goto main; 
	}
	for(i=0;i<q_counter;i++)
	{
		cout<<q[i]<<endl;
	}
	
	return 0;	
}

int add(int a,int b,int arr[])
{
	
	int i;
	for(i=b;i>=0;i--)
	{
		arr[i+1]=arr[i];
		
	}
	arr[0]=a;
	return 1;
	
}

int deque(int arr[],int b)
{
	int i;
	cout<<"item dequed ";
	cout<<arr[b-1]<<endl;
	return 1;

}

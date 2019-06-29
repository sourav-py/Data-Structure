#include <iostream>
using namespace std;
void binary_search(int arr[],int ,int,int);
int main()
{
	int z;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	cout<<"Enter element to find"<<endl;
	cin>>z;
	binary_search(arr,11,z,0);
	
	return 0;
	
}

void binary_search(int arr[],int b,int x,int a)
{
	while(a<b)
	{
	
		if(arr[a] == x)
		{
			cout<<"index: "<< a<<endl;
			break;
				
		}
		
		else if(arr[a+(b-a-1)/2] == x)
		{
			cout<<"index: "<<a+(b-a-1)/2<<endl;
			break;
		
		}
		else if(arr[b-1] == x)
		{
			cout<<"index: "<<(b-1)<<endl;
			break;
		
		}
		else if(x<arr[a+(b-a-1)/2])
		{
			b = (b-1)/2;
			
		
		}
		else if(x>arr[a+(b-a-1)/2])
		{
			
			a = a+(b-a-1)/2 + 1;
			
		}
		else
		{
			cout<<"Unspecified error!"<<endl;
		}

}}

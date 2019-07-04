#include <iostream>
using namespace std;

int main()
{
    
    long unsigned  k,x,i,temp;
    long unsigned  y;
    cin>>y>>x;
    int arr[y];
    
    for(i=0;i<y;i++)
    {
        cin>>arr[i];
    }
    
      
    //rotation
    for(k=0;k<x;k++)
    {
        temp = arr[0];
        for(i=0;i<y-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[4]=temp;
    }

    //after rotation
    
    
    for(i=0;i<y;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
    
    
    
}

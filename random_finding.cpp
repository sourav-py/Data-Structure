#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getRandomNumber(int a,int b)
{
	return a  + rand()%(b-a);
}

void linearSearch()
{
	return;
}
int main()
{
	srand(time(0));
	int a[100],i;
	for(int i=0;i<100;i++)
	{
		a[i] = getRandomNumber(0,500);
	}
	for(i=0;i<100;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}

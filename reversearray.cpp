#include<iostream>
#include<stdlib.h>


using namespace std;


int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10/2;i++)
	{
		int other = 10-i-1;
		int temp = arr[i];
		arr[i]=arr[other];
		arr[other]=temp;
	}
	
	for(int j =0;j<10;j++)
	{
		cout<<arr[j]<<endl;
	}
	
	system("pause");
	
	
	
	}
	
	


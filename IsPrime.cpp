#include<iostream>
#include<stdlib.h>

using namespace std;


int main()
{
	int n;
	cin>>n;
	
	for(int i = 2 ; i*i <= n;i++)
	{
		if(n%i==0)
		flag = 1;
		else
		flag =0;
	}
	if(flag==0)
	cout<<"Prime"<<endl;
	else
	cout<<"not prime"<<endl;
	
	system("pause");
}

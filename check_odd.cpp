#include<iostream>
#include<stdlib.h>

using namespace std;

int check_odd(int a[], int n) {
	int res = 0;
	
for(int i = 0; i<n;i++)
{
	res = res ^ a[i];
}
	
	return res;
	
	
}

int main()
{
	
	int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
     int n = sizeof(ar)/sizeof(ar[0]);
	 
	 cout<<check_odd(ar,n)<<endl;
	 
	 system("pause");
	 
	 return 0; 
	
	
}

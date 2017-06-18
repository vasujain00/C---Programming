#include<iostream>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;

bool has_array_two(int a[],int n,int sum)
{
	int l,r;
	sort(a,a+n);
	l=0;
	r=n-1;
	
	while(l<r)
	{
		if(a[l]+a[r]==sum)
		return 1;
		else if (a[l]=a[r]<sum)
		l++;
		else
		r--;
	}
	
  return 0;	
	
	
}

int main()
{
	
	int A[] = {1, 4, 45, 6, 10, -8};
    int n = 16;
    int arr_size = 6;
    
    if(has_array_two(A, arr_size, n))
        printf("Array has two elements with sum 16");
    else
        printf("Array doesn't have two elements with sum 16 ");
 
    system("pause");
    return 0;
	
	
	
	
	
	
	
	
	
}

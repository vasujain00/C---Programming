#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;


int max_sum_sub_array(int a[],int n)
{
	int max_ending_so_far = 0;
	int max_so_far=0;
	for(int i=0;i<n;i++)
	{
		max_ending_so_far = max_ending_so_far + a[i];
		
		if(max_ending_so_far <0)
		max_ending_so_far=0;
		else if(max_ending_so_far>max_so_far)
		max_so_far = max_ending_so_far;
	}
	
	return max_so_far;
}

int neg_max_sum(int a[],int n)
{
	int curr_max  = a[0];
	int max_far = a[0];
	
	for(int i=1;i<n;i++)
	{
		curr_max = max(a[i],curr_max + a[i]);
		max_far = max(max_far,curr_max);
	}
	return max_far;
}
int main()
{
	 int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = max_sum_sub_array(a, n);
    int max2 = neg_max_sum(a,n);
    cout << "Maximum contiguous sum is " << max_sum << " "<<max2;
    
    return 0;
}

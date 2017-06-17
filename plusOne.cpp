#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int> plusOne(vector<int> digits)
{
	vector<int> results;
	vector<int>::iterator it;
	int carry = 1;
	
	
	for(it = digits.rbegin();it != digits.rend();++it)
	{
		int sum = *it + carry;
		
		carry = ( sum == 10 ) ? 1 : 0;
		sum = (sum == 10)? 0 : sum ;
		
		results.push_back(sum);
		
	}
	if(carry == 1)
	results.push_back(1);
	
	reverse(results.begin(),results.end());
	
	for(it= results.begin(); it!=results.end();++it)
	  cout<<*it;
	  
	  cout<<endl;
	  
	  return results;
	
}
int main()
{
	vector<int> digits,ans;
	
	int n;
	int an;
	cout<<"enter how many digits to be entered"<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
	
	cin>>an;
	digits.push_back(an);
     }
     
     ans = plusOne(digits);
	
	system("pause");
	
}

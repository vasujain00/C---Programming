#include<iostream>
#include<stdlib.h>
#include<list>

using namespace std;

int main()

{
	
	list<int> l;
	
l.push_back(2);
l.push_front(5);
l.insert(++l.begin(),99);

list<int>::iterator i;

for(i=l.begin();i!=l.end();++i)
cout<<*i<<endl;


system("pause");
	
	
	
	
	
	
}

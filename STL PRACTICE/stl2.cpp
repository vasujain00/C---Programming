#include<iostream>
#include<stdlib.h>
#include<list>

using namespace std;

int main()

{
	list<int> l;
list<int>::iterator lt1,lt2;
for(int i=1;i<10;++i) l.push_back(i*10);

for(lt1=l.begin();lt1!=l.end();++lt1)
cout<<*lt1<<" ";

cout<<endl;


lt1=lt2 = l.begin();
advance(lt2,6);
++lt1;
lt1 = l.erase(lt1);
lt2 = l.erase(lt2);

for(lt1=l.begin();lt1!=l.end();++lt1)
cout<<*lt1<<" ";

cout<<endl;
++lt1;
--lt2;
l.erase(lt1,lt2);

for(lt1=l.begin();lt1!=l.end();++lt1)
cout<<*lt1<<" ";
cout<<endl;
system("pause");

}

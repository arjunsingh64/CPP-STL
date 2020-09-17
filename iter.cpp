#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>vect = {1,2,3,4,5};
	vector<int>::iterator it;	
	for(it=vect.begin();it!=vect.end();++it)
	{
		if(it==vect.begin())
		{
			it = vect.erase(it);
		}
	}
	for(it=vect.begin();it!=vect.end();++it)
	cout<<*it;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int>s1;
	for(int i=0;i<5;++i)
	{
		int input;
		cin>>input;
		s1.insert(input);		
	}
	set<int>::iterator it;
	for(it = s1.begin();it!=s1.end();++it)
	{
		cout<<*it<<" ";
	}
	
	int remv;
	cout<<"\nEnter the element which You want to remove : ";
	cin>>remv;
	s1.erase(remv);

	
	cout<<"\nEnter the element which you want to insert: ";
	int elem;
	cin>>elem;
	it = s1.insert(it,elem);
	for(it = s1.begin();it!=s1.end();++it)
	{
		cout<<*it<<" ";
	}


	set<int>s2;
	s2.insert(s1.begin(),s1.end());
	cout<<"\nElements of set2 are : ";
	for(it = s2.begin();it!=s2.end();++it)
	{
		cout<<*it<<" ";
	}
}

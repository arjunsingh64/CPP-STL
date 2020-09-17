#include<bits/stdc++.h>
using namespace std;
int main()
{
	list<int>l1,l2;
	list<int>::iterator it;
	for(int i=0;i<10;++i)
	l1.push_back(i);
	for(int j=0;j<10;++j)
	l2.push_front(j);

	for(it=l1.begin();it!=l1.end();++it)
	cout<<*it<<" ";
	cout<<"\n";
	for(it=l2.begin();it!=l2.end();++it)
	cout<<*it<<" ";
	cout<<"\n";
	l1.pop_back();
	l1.pop_front();
	for(it=l1.begin();it!=l1.end();++it)
	cout<<*it<<" ";
	cout<<"\n";
	l2.sort();
	for(it=l2.begin();it!=l2.end();++it)
	cout<<*it<<" ";

	l2.merge(l1);
	for(it=l2.begin();it!=l2.end();++it)
	cout<<*it<<" ";
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	multiset<int,greater<int>>ms;
	for(int i=0;i<5;++i)
	{
		int input;
		cin>>input;
		ms.insert(input);
	}
	multiset<int,greater<int>>::iterator it;
	
	for(it = ms.begin(); it!=ms.end();++it)
	cout<<*it<<" ";
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	deque<int>d1;
	deque<int>::iterator it;
	d1.push_back(1);
	d1.push_back(2);
	d1.push_back(3);
	d1.push_back(4);
	d1.push_back(5);
	
	for(it = d1.begin();it!=d1.end();++it)
	cout<<*it;
}

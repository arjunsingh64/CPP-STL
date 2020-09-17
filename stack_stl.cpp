#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int>sq;
	sq.push(10);
	sq.push(20);
	sq.push(30);
	sq.push(40);
	sq.push(50);
	//while(!sq.empty())
	for(int i=0;i<3;++i)	
	{
		cout<<sq.top()<<" ";
		sq.pop();	
	}
	//cout<<"\n"<<sq.size();
}

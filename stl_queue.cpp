#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int>q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	//while(!q.empty())
	for(int i=0;i<3;++i)	
	{
		cout<<q.front()<<" ";	
		q.pop();
	}

	
}	

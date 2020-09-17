#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int>pq;
	pq.push(10);
	pq.push(20);
	pq.push(30);
	pq.push(40);
	pq.push(50);
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		pq.pop();	
	}
	cout<<"\n"<<pq.size();

	priority_queue<int , vector<int> , greater<int>> p_q;	
	p_q.push(10);
	p_q.push(20);
	p_q.push(30);
	p_q.push(40);
	p_q.push(50);
	while(!p_q.empty())
	{
		cout<<p_q.top()<<" ";
		p_q.pop();	
	}
}

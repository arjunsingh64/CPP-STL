#include<bits/stdc++.h>
using namespace std;
int main()
{
	multimap<int,string>mp;
	multimap<int,string>::iterator it;
	cout<<"Enter the size of maps : ";	
	int size;
	cin>>size;			
	for(int i=0;i<size;++i)
	{
		int key;
		string str;
		cin>>key>>str;
		mp.insert(pair<int,string>(key,str));
	}
	for(it = mp.begin(); it!=mp.end() ; ++it)
	{
		cout<<"\n"<<it->first<<" "<<it->second;
	}
}

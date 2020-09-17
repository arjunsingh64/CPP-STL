#include<bits/stdc++.h>
using namespace std;
int main()
{
	int key,value;
	map<int,int> mp;
	map<int,int>::iterator it;
	for(int i=0;i<5;++i)
	{
		cin>>key;
		cin>>value;
		mp.insert(pair<int,int>(key,value));
	}

	cout<<"Output : \n";
	for(it = mp.begin(); it!= mp.end() ; ++it)
	cout<<"\n"<<it->first<<" "<<it->second;
	cout<<"\n";
	
	cout<<"Inserting a value from one map to other until it found the key 3\n";
	map<int,int>mp2(mp.begin(),mp.find(3));
	map<int,int>::iterator it2;
	for(it2 = mp2.begin(); it2!= mp2.end() ; ++it2)
	cout<<"\n"<<it2->first<<" "<<it2->second;
	cout<<"\n";

	cout<<"Erase all elements from until it find key 4\n";
	mp.erase(mp.begin(),mp.find(4));	
	for(it = mp.begin(); it!= mp.end() ; ++it)
	cout<<"\n"<<it->first<<" "<<it->second;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[8]={1,2,2,3,1,4,4,5};
	unordered_map<int,int>mp;
	unordered_map<int,int>::iterator it;	
	for(int i=0;i<8;++i)
	{
		mp[arr[i]]++;
	}


	for(auto it = mp.begin();it!=mp.end();++it)	
	{
		cout<<it->first<<" "<<it->second<<"\n";
	}

//	for(auto x : mp)
//	cout<<x.first<<" "<<x.second<<"\n";
}

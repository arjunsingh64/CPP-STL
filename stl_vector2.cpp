#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	vector<int>vect = {1,2,3,3,3,4,5,5,5,5};
	vector<int>vect2;
	cout<<"\nErasing 2 from vector : ";	
	vect.erase(vect.begin()+1);
	for (i=0; i<vect.size(); i++) 
        cout << vect[i] << " "; 	
	cout<<"\n";	
	vect.erase(unique(vect.begin(),vect.end()),vect.end());
	for (i=0; i<vect.size(); i++) 
        cout << vect[i] << " ";
	
	cout<<"\nCopying elements from arr1 to arr2 : ";	
	int arr[]={1,2,3,4,5};
	int arr2[5];
	copy_n(arr,5,arr2);
	for (i=0;i<5; i++) 
        cout << arr2[i] << " ";
	cout<<"\n";
}



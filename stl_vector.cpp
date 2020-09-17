#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=7,i;
	vector<int>vect = {3,2,1,5,4,4,4};
	sort(vect.begin(),vect.end());
	cout << "\nVector after sorting is: "; 
    	for (i=0; i<n; i++) 
        cout << vect[i] << " "; 
	reverse(vect.begin(),vect.end());
	cout << "\nVector after reverse is: "; 	
	cout << "\nVector max is: ";
	cout<<*max_element(vect.begin(),vect.end());
	cout << "\nVector min is: ";
	cout<<*min_element(vect.begin(),vect.end());
	cout << "\nVector sum is: ";
	cout<<accumulate(vect.begin(),vect.end(),0);
	cout << "\nVector first 3 sum is: ";
	cout<<accumulate(vect.begin(),vect.begin()+3,0);
	cout << "\nVector single Element count : ";	
	cout<<count(vect.begin(),vect.end(),4);
	cout << "\nVector single Element finds : ";	
	find(vect.begin(),vect.end(),7) != vect.end() ? cout << "Element Present" : cout<< "Element absent";
	cout<<"\nBinary Search Now, say we want to search for 2"; 
	if (binary_search(vect.begin(),vect.end(),2)) 
        cout << "\nElement found in the array"; 
    	else
        cout << "\nElement not found in the array"; 
	cout<<"\nErasing 2 from vector : ";	
	vect.erase(vect.begin()+3);
	for (i=0; i<vect.size(); i++) 
        cout << vect[i] << " "; 
	cout<<"\n"
}

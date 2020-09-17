// C++ code to demonstrate the working of 
// max() and min() 
#include<bits/stdc++.h> 
#include<valarray> // for valarray functions 
using namespace std; 
int main() 
{ 
	// Initializing valarray 
	valarray<int> va = { 10, 2, 20, 1, 30 }; 
	
	// Displaying largest element of valarray 
	cout << "The min element of valarray is : "; 
	cout << va.max() << endl; 
	
	// Displaying smallest element of valarray 
//	cout << "The smallest element of valarray is : "; 
//	cout << varr.min() << endl; 

	return 0; 
	
} 


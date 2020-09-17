#include<iostream> 
#include<algorithm> // for partition algorithm 
#include<vector> // for vector 
using namespace std; 
int main() 
{ 
    // Initializing vector 
    vector<int> vect = { 2, 1, 5, 6, 8, 7 }; 
      
    // partitioning vector using partition() 
    partition(vect.begin(), vect.end(), [](int x) 
    { 
        return x%2==0; 
          
    }); 
     
    // Displaying partitioned Vector 
    cout << "The partitioned vector is : "; 
    for (int &x : vect) cout << x << " "; 
      
    return 0; 
      
} 


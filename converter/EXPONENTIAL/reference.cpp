#include <iostream>
#include <ctime>
using namespace std;

	double vals [] = {10.3,11.3,12.4,16.2,15.9};
	double& setValues(int i)
	{ 
	return vals[i]; // return a reference to the ith element 
    }
	// main function to call above defined function.
	 int main() 
	 { 
	 cout << "Value before change" << endl; 
	 for ( int i = 0; i < 5; i++ ) {
	  cout << "vals[" << i << "] = ";
	   cout << vals[i] << endl; 
	   }
	   setValues(1) = 20.23; // change 2nd element
	    setValues(3) = 70.8; // change 4th element
		 cout << "Value after change" << endl;
		  for ( int i = 0; i < 5; i++ )
		 
	{ 
	cout << "vals[" << i << "] = "; 
	cout << vals[i] << endl; 
	} 
	return 0; 
}



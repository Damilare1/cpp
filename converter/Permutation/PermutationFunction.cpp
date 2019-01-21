#include <iostream>
using namespace std;

 int Perm(int n,int r);      //Declaring Function: Permutation
 
 int main() {
 	int n;
 	int r, x;
 	cout << "insert value of n" <<endl;
 	cin >> n;
 	cout << "Insert value of r" << endl;
 	cin >> r ;
 	
 	x = Perm(n,r);
 	cout << "The permutation is: " << x;
 	
 	return 0;
 }
 
int Perm(int n, int r){
 	int i,p,q, NFact = 1, NRFact = 1;
 	for(i = n; i>=1; i--) {
 		NFact = i * NFact; 		 // Find Factorial of n
 	}
 	q=n-r;
	 for(i = q; i>=1; i--) {
 		NRFact = i * NRFact;
 	}
 	p = NFact/NRFact;
 	return p;
 }

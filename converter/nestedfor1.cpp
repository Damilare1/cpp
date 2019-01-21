#include <iostream>
using namespace std;
int i,j;
int main() {
for(i=2; i<100; i++) {
	for(j=2; j<(i/j); j++)
	cout << (i%j) << " "<< (!(i%j));
	
	
	if(!(i%j)) break;
	
//	if(j = (i/j)) {
//		cout << " "<<  i<< " " << j << " " << i/j << " " << i%j << " "<<  "is different \n";
	} 
	if(j > (i/j)) {
		cout << " "<<  i<< " " << j << " " << i/j << " " << i%j << " "<<  "is a prime number \n";
	}
	
	return 0;
}

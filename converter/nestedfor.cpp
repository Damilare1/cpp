#include <iostream>
using namespace std;
int i,j,y;
int main() {
for(i=2; i<10; i++) {
	for(j=2; j<(i/j); j++)
	cout << "i is " << i << " j is " << j << " i/j is " << i/j << " i%j " << i%j << endl;
	
	}
	return 0;
}

#include <iostream>
using namespace std;
int i, j,y,z; 

int main() {
	for(i=0; i<10; i++) {
		for(j=0; j< (i/j); j++)
		y = !(i%j);
		z=  (i%j);
		cout << i << " " << j << " " << z <<" " <<y<<endl;
	}
	return 0;
}

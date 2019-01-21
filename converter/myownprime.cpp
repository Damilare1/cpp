#include <iostream>
using namespace std;

int i, j, k;
int n=1;
int main() {
	while(n < 10) {
		for (i=1; i <= (n/i); i++){
			if((i != 1) & (i != n) ){
			if( ((n % i) == 0)){
			
					cout <<  n << " " << i << " Is not a prime number" <<endl;
				}
			}
			

		else {
		
			cout <<  n << " " << i << " Is  a prime number" <<endl;
		}
		}
	n++;
	}
return 0;
}

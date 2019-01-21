#include <iostream>
#include <cmath>
using namespace std;
double expo(double a);
int main() {
	double a;
	float e;
	cout << "Insert value of X you want to find the exponential" <<endl;
	cin >> a ;
	e = expo( a);
	cout << "The exponential of the value inserted is " << e;
	
}

double expo(double a){
	double i,c,d;
	double temp,expo;
	d = 1;
	temp = 0;
	for(i = 1;i <= 1000 ; i++){
		c = pow(a,i);
		d = d * i;
		temp = temp + (c/d);
				}
	
	
      expo = 1 + temp;
 		return expo;
}


#include <iostream>
#include <iomanip>
using namespace std;
const double pi = 3.14159;
const double areaofslice = 14.125;
double area,numb, diameter, r, fracleft;

int main() {
	cout << "Enter the diameter of the pie in inches";
	cin  >> diameter;
	r = diameter/2;
	area = pi * r * r;
	numb = area/areaofslice;
//	fracleft = area % areaofslice;
	cout << setiosflags(ios::fixed)<< setprecision(1);
	cout << "The number of slices: " << setw(5) << numb;
//	cout << "Fraction left: " << setw(8) << fracleft;
	return 0;
	
	
}

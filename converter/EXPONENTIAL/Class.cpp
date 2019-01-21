#include <iostream>

using namespace std;

class Box {
	public:
	double length;
	double breadth;
	double getarea(void);
	void setlength (double len);
	void setbreadth (double bre);
};

double Box::getarea(void){
	return length * breadth;
	
};

void Box::setlength(double len){
	length = len;
};

void Box::setbreadth(double bre) {
	breadth = bre;
};

int main() {
double l,b;
Box areaofbox;
double area;
cout << "Insert length of box;" ;
cin >> l;
cout << "Insert breadth of box:" ;
cin >> b;

areaofbox.setlength(l);
areaofbox.setbreadth(b);
area = areaofbox.getarea();
cout << "The area of the box is: " << area <<endl;
return 0;



}

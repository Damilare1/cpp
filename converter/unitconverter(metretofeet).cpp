#include <iostream>
using namespace std;
float lm, lf;
int input;
int main()
{
cout << "1. To convert from feet to metre \n" <<"2. To convert from metre to feet \n"<<"Enter the number beside your choice";
cin >> input;
if(input == 1) {
cout << "Enter the length you want to convert" ;
cin >> lf;
lm = lf / 3.28;
cout << "Length in metres is " << lm;}
else if (input == 2) {
cout << "Enter the length you want to convert" ;
cin >> lm;
lf = lm * 3.28;
cout << "Length in metres is " << lf ;
}
return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
/* want to make a program that converts seconds to minutes, minutes to hours*/
int secs, mins, hrs,secs1,mins1, choice;
int main() {
	cout << "1. Convert Seconds to Minutes \n" << "2. Convert Minutes to hours \n";
	cin >> choice;
	if(choice == 1){
		cout << "Enter Seconds" << endl;
		cin >> secs;
		mins = secs / 60;
		secs1 = secs % 60;
		cout << mins << " Minutes  " << secs1 << " Seconds";
	}
	if(choice == 2){
		cout << "Enter Minutes" << endl;
		cin >> mins;
		hrs = mins / 60;
		mins1 = mins % 60;
		cout << hrs << " Hours  " << mins1 << " Minutes";
	}
}

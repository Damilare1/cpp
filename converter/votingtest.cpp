#include <iostream>
using namespace std;
void Func(void);
void two(void);
	static int i = 0, t=0;
int choice, N=0;
int main() {
do{
 	cout << "ENTER YOUR SELECTION" << endl;
	cout << "FOR CHOICE 1, PRESS 1." << endl;
	cout << "FOR CHOICE 2, PRESS 2." << endl;
	cin >> choice;
	if(choice == 1) {
		Func();
	}
	if(choice == 2){
		two();
	}
N++;
}while(N < 5);
cout << "Total Number of Votes for 1: " << i<<endl;	
cout << "Total Number of Votes for 2: " << t<<endl;	
}

void Func(void) {

	i++;
}
void two(void) {
	t++;
}

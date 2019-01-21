#include <iostream>
#include <ctime>
using namespace std;
int main(){
	// current date/time based on current system 
	time_t now = time(0);
	tm *ltm = localtime(&now); 
	// convert now to string form
	 char* dt = ctime(&now);
	  cout << "Year: "<< 1900 + ltm->tm_year << endl;
	  cout << "Month: "<< 1 + ltm->tm_mon<< endl;
	  cout << "Day: "<< ltm->tm_mday << endl;
	  cout << "Time: "<<ltm->tm_hour << ":";
	  cout << ltm->tm_min << ":"; 
	  cout << ltm->tm_sec << endl;
	  cout << "The local date and time is: " << dt << endl;
	  cout << "Number of secs since January 1,1970: " << now;
}

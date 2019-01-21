#include <iostream>
#include <iomanip>
using namespace std;
int quantity;
double punit,price,tprice, tax ;
const double taxpercent = 0.25;
int main() {
	cout<<"Insert amount of goods purchased: "<< endl;
	cin >> quantity;
    cout<<"Insert price per unit: "<< endl;
    cin >> punit;
    tprice = quantity*punit;
    tax = taxpercent*tprice;
    price = tprice + tax;
    cout << "INVOICE" << endl;
    cout << "-------" << endl;
    cout << " ";
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << "QUANTITY:           " << setw(8)<<quantity<<endl;
    cout << "PRICE PER UNIT:     " << setw(8)<<tprice<<endl;
    cout << "TOTAL PRICE:        " << setw(8)<<price<<endl;
    cout << "tax:                " << setw(8)<<tax<<endl;

}

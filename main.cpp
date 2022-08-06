#include <iostream>
#include "wallet.h"

using std::cout;
using std::endl;
using std::cin;

int main() {

	Wallet wallet;
	//wallet.Init(); <-- not needed since we start with a constructor

	int amt = 1;
	int total;

	cout << "Input the bill you want to add to the wallet (0 to exit): " << endl;

	while (amt != 0) {
		cout << "Input: ";
		cin >> amt; 

		wallet.addBills(amt);
	};
	
	total = wallet.computeTotalUSD();
	cout << "\n";
	cout << "Total $" << total << endl;

};
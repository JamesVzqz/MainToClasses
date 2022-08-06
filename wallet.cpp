#include <iostream>
#include "wallet.h"

using std::cout;
using std::endl;


Wallet::Wallet() {
	num1s = 0;
	num5s = 0;
	num10s = 0;
	num20s = 0;
	num100s = 0;
};
void Wallet::Init() {
	num1s = 0;
	num5s = 0;
	num10s = 0;
	num20s = 0;
	num100s = 0;
}
void Wallet::addBills(int amt) {
	if (amt == 1) num1s++;
	else if (amt == 5) num5s++;
	else if (amt == 10) num10s++;
	else if (amt == 20) num20s++;
	else if (amt == 100) num100s++;
	else if (amt == 0) cout << "You're total money is: " << endl;
	else cout << "Not saved into wallet, please enter a valid bill amount \n";
}
int  Wallet::computeTotalUSD() {
	return (num1s * 1) + (num5s * 5) + (num10s * 10) + (num20s * 20) + (num100s * 100);
}
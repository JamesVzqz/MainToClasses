
class Wallet {
private:
	int num1s;
	int num5s;
	int num10s;
	int num20s;
	int num100s;
public:
	Wallet();
	void Init(); //<-- not needed since we have the constructor Wallet()
	void addBills(int amt);
	int computeTotalUSD();
};

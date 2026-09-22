#include"generalward.h"
int main() {

	ward* P1 = new generalward();
	ward* P2 = new generalward;

	cout << "Enter the value of P1 is: " << endl;
	cin >> *P1;
	/*cout << "Enter the value of P2 is: " << endl;
	cin >> *P2;*/

	P1->admitpatient();
	//P2->admitpatient();
	P1->getwardinfo();
	//P2->getwardinfo();

	delete P1;
	delete P2;

	return 0;
}
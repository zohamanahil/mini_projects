#include "patient.h"
Patient::Patient() {
	name = " ";
	age = 0;
	bloodgroup = " ";
}
Patient:: Patient(string n, int a, string b) {
	name = n;
  setage(a);
  bloodgroup = b;
}
void Patient::setname(string n ) {
	name = n;
}
string Patient::getname() const{
	return name;
}
void Patient::setage(int a) {
	if (age >= 0 && age <= 120)
		age = a;
	else
		age = 0;
}
int Patient::getage() const{
	return age;
}
void Patient::setbg(string b) {
	bloodgroup = b;
}
string Patient::getbg() const{
	return bloodgroup;
}
void Patient::setpatient(string n, int a, string b) {
	name = n;
	if (a >= 0 && a <= 120)
		age = a;
	else
		age = 0;
	bloodgroup = b;
}
ostream& operator<<(ostream& out , const Patient& p) {
	out << "[" << p.getname() << "] " << p.getage() << " | " << p.getbg() << endl;
	return out;
}
istream& operator>>(istream& in, Patient& p) {
	cout << "Enter the name of the Patient: "<<endl;
	in >> p.name;
	cout << "Enter the age of the Patient: " << endl;
	in >> p.age;
	p.setage(p.age);
	cout << "Enter the Bloodgroup of the Patient: " << endl;
	in >> p.bloodgroup;
	return in;
 }
bool Patient::operator==(const Patient& p)const {
	return bloodgroup == p.getbg();
}
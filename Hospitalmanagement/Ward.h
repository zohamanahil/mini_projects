#pragma once
#include"patient.h"
using namespace std;
class ward {
private:
	string wname;
	int capacity;
public:
	// constructor,destructor
	ward(){
		wname = " ";
		capacity = 0;
	}
	ward(string n, int c) {
		wname = n;
		setcapacity(c);
	}
	virtual ~ward() = default;
	//getter,setters
	void setname(string n) { wname = n; }
	string getwname() const{ return wname; }
	void setcapacity(int c) {
		if (c > 0)
			capacity = c;
		else
			capacity = 1;
	}
	int getcapacity() const { return capacity; }
	void setward(string n, int cap) {
		wname = n;
		capacity = cap;
	}
	//virtual functions
	virtual void admitpatient() = 0;
	virtual void getwardinfo() = 0;
	//stream functions
	friend ostream& operator<<(ostream& out,const ward& w){
		out << "Ward name: " << w.getwname() << " | " << "Capacity it has: " << w.getcapacity() << endl;
		return out;
	}
	friend istream& operator>>(istream& in, ward& w) {
		cout << "Enter the ward name: " << endl;
		in.ignore();
		getline(in, w.wname);
		cout << "Enter the capacity it has: " << endl;
		in >> w.capacity;
		return in;
	}
		  
};

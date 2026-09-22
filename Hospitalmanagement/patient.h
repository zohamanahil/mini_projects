#pragma once
#include<iostream>
#include<string>
using namespace std;
class Patient {
private:
	string name;
	int age;
	string bloodgroup;
public:
	//constructor,destructors
	Patient();
	Patient(string, int, string);
	~Patient(){}
	//getters and setters
	void setname(string);
	string getname() const;
	void setage(int);
	int getage() const;
	void setbg(string);
	string getbg() const;
	void setpatient(string,int,string);
	//friend streams
	friend ostream& operator<<(ostream&, const Patient&);
	friend istream& operator>>(istream&, Patient&);
	//Compare operator
	bool operator==(const Patient&)const;

};
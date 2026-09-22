#pragma once
#include"ward.h"
const int SIZE = 1;
class generalward : public ward{
private:
	Patient P[SIZE];
public:
	generalward() {}
	virtual ~generalward() = default;
	void admitpatient() override{
		cout << "Add patients:" << endl;
		for (int i = 0;i < SIZE;i++) {
			cin >> P[i];
		}
	}
	void  getwardinfo() override {
		cout << *this;
		for (int i = 0;i < SIZE;i++) {
			cout << P[i];
		}
	}
	Patient operator[](int i) {
		if (i >= 0 && i <= SIZE) {
			return P[i];
		}
		else
			return P[0];
	}
};
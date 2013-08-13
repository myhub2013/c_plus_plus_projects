#pragma once
#include <iostream>
using namespace std;

class Plorg
{
private:
	static const int LENGTH = 19;
	char name[LENGTH];
	int CI;
public:
	Plorg();
	Plorg(const char * n);
	~Plorg();
	void changIndex(int val);
	void report() const;
};


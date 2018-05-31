#pragma once
#include "Library.h"

class MusInstr {
protected:
	string name;
	string model;
	size_t weight;
	string owner;

public:
	MusInstr();
	MusInstr(string name, string model, size_t weight, string owner);
	
	virtual void print() = 0;
};
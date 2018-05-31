#pragma once
#include "Library.h"
#include"MusicInstrument.h"

class StringInstr :public MusInstr {
private:
	size_t countStr;
public:
	StringInstr()=default;
	StringInstr(string name, string model, size_t weight, string owner, size_t countStr):MusInstr(name,model,weight,owner),countStr(countStr){}

	void print();

	friend istream& operator >> (istream& is, StringInstr& obj);
	friend ostream& operator<<(ostream& os, StringInstr obj);

};

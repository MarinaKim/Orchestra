#pragma once
#include "Library.h"
#include"MusicInstrument.h"

class PercussionInstr:public MusInstr {
private:
	string soundMake;
public:
	PercussionInstr() = default;
	PercussionInstr(string name, string model, size_t weight, string owner, string soundMake) :MusInstr(name, model, weight, owner), soundMake(soundMake) {}
	void print();

	friend istream& operator >> (istream& is, PercussionInstr& obj);
	friend ostream&operator<<(ostream&os, PercussionInstr obj);
};

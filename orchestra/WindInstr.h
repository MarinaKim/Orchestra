#pragma once
#include"Library.h"
#include"MusicInstrument.h"

class WindInstr :public MusInstr {
private:
	string material;
public:
	WindInstr() = default;
	WindInstr(string name, string model, int weight, string owner, string material):MusInstr(name, model, weight, owner), material(material){}

	void print();
	friend istream& operator >> (istream& is, WindInstr& obj);
	friend ostream& operator<<(ostream& os, WindInstr obj);
};
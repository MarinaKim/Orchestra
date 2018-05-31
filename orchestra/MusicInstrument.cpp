#include "MusicInstrument.h"

MusInstr::MusInstr()
{
	this->name = "";
	this->model = "";
	this->weight = 0;
	this->owner = "";
}

MusInstr::MusInstr(string name, string model, size_t weight, string owner)
{
	this->name = name;
	this->model = model;
	this->weight = weight;
	this->owner = owner;
}

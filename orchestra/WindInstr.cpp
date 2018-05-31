#include "WindInstr.h"

void WindInstr::print()
{
	cout << this->name << "\t" << this->model << "\t" << this->weight << "\t" << this->owner << "\t" << this->material << endl;
}

istream & operator >> (istream & is, WindInstr & obj)
{
	is >> obj.name >> obj.model >> obj.weight >> obj.owner >> obj.material;
	return is;
}

ostream & operator<<(ostream & os, WindInstr obj)
{
	os << setw(15) << obj.name << setw(10) << obj.model << setw(5) << obj.weight << setw(15) << obj.owner << setw(10) << obj.material << endl;
	return os;
}

#include "StringInstr.h"

void StringInstr::print()
{
	cout << this->name << "\t" << this->model << "\t" << this->weight << "\t" << this->owner<<"\t" <<this->countStr <<endl;
}

istream & operator >> (istream & is, StringInstr & obj)
{
	is >> obj.name >> obj.model >> obj.weight >> obj.owner >> obj.countStr;
	return is;
}

ostream & operator<<(ostream & os, StringInstr obj)
{
	os << setw(15) << obj.name << setw(10) << obj.model << setw(5) << obj.weight << setw(15) << obj.owner << setw(10) << obj.countStr << endl;
	return os;
}

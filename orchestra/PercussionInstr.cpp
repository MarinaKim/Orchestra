#include "PercussionInstr.h"

void PercussionInstr::print()
{
	cout << this->name << "\t" << this->model << "\t" << this->weight << "\t" << this->owner << "\t" <<this->soundMake <<endl;
}

istream & operator >> (istream & is, PercussionInstr & obj)
{
	is >> obj.name >> obj.model >> obj.weight >> obj.owner>>obj.soundMake;
	return is;
}

ostream & operator<<(ostream & os, PercussionInstr obj)
{
	os << setw(15) << obj.name << setw(10) << obj.model << setw(5) << obj.weight << setw(15) << obj.owner<<setw(10)<<obj.soundMake << endl;
	return os;
}

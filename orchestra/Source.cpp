#include"MusicInstrument.h"
#include"PercussionInstr.h"
#include"StringInstr.h"
#include"WindInstr.h"

int main() {
	setlocale(LC_ALL, "Rus");
	MusInstr **mi;
	mi = new MusInstr*[3];
	WindInstr wi("saks", "1234",2, "Ivanov", "derevo");
	mi[0] = &wi;
	StringInstr si("gitara", "fg366", 2, "Petrov", 7);
	mi[1] = &si;
	PercussionInstr pi("baraban", "yru46", 4, "Sidorov", "membranofon");
	mi[2] = &pi;

	for (int i = 0;i < 3;i++)
		(*mi[i]).print();

	system("pause");
	return 0;
}
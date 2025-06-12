#include "Aktivitet.h"
Aktivitet::Aktivitet() {}

Aktivitet::Aktivitet(int e, string t, int d)
{
	event = e;
	task = t;
	duration = d;
}

int Aktivitet::getEvent() const
{
	return event;
}

string Aktivitet::getTask() const
{
	return task;
}

int Aktivitet::getDuration() const
{
	return duration;
}
Aktivitet::~Aktivitet(){}

#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Aktivitet
{
public:
	Aktivitet();
	Aktivitet(int, string, int);
	int getEvent() const;
	string getTask() const;
	int getDuration() const;
	~Aktivitet();
	
private:
	int event;
	string task;
	int duration;
};


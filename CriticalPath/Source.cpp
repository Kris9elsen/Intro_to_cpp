#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include "Aktivitet.h"
using namespace std;

string kritiskVej("");

int findTotalSlack(std::vector<Aktivitet> table) // Supplerende opgave 2
{
	int totalSlack = 0;
	int currentEvent = 1;
	for (Aktivitet akt : table) 
	{
		if (akt.getEvent() == currentEvent) 
		{
			Aktivitet maxAkt = akt;
			for (Aktivitet other : table) 
			{
				if (other.getEvent() == akt.getEvent() && other.getDuration() >	maxAkt.getDuration())
					maxAkt = other;
			}
			int eventSlack = 0;
			for (Aktivitet other : table) 
			{
				if (other.getEvent() == maxAkt.getEvent()) 
				{
					eventSlack += maxAkt.getDuration() - other.getDuration();
				}
			}
			totalSlack += eventSlack;
			eventSlack = 0;
			currentEvent++;
		}
	}
	return totalSlack;
}


Aktivitet genererAkt(string linje)
{

	int pos = 0;
	string temp("");
	for (; linje.at(pos) != '\n' && linje.at(pos) != ';'; pos++)
		temp.push_back(linje.at(pos));
	int e = stoi(temp);

	temp = ""; pos++;
	for (; linje.at(pos) != '\n' && linje.at(pos) != ';'; pos++)
		temp.push_back(linje.at(pos));
	string t = temp;

	temp = ""; pos++;
	for (; pos < linje.size(); pos++)
		temp.push_back(linje.at(pos));
	int d = stoi(temp);

	return Aktivitet(e, t, d);
}

vector<Aktivitet> createTable()
{
	ifstream data;
	data.open("data.txt");
	vector<Aktivitet> tabel;

	while (!data.eof())
	{
		string sa;
		getline(data, sa);
		tabel.push_back(genererAkt(sa));

	}
	return tabel;
}




int main()
{
	vector<Aktivitet> tabel = createTable();

	int totalDuration = 0;

	for (int i = 0; i < tabel.size(); i++)
		totalDuration += tabel[i].getDuration();

	cout << "Antal aktiviteter:      " << tabel.size() << endl;
	cout << "Gennemsnitlig varighed: " << (float)totalDuration / tabel.size() << endl;

	int laengdeKritiskVej = 0;
	int noOfEvents = tabel[tabel.size() - 1].getEvent();
	int aktuelEvent = 1;
	int indeks = 0;
	int maxVarighedAktuelEvent = 0;
	int minVarighedAktuelEvent = 999;	// S1
	int maxSlack = 0;					// S1
	string maxTask = "";
	string minTask = "";				// S1
	string finalMinTask = "";			// S1


	while (true)
	{
		while (indeks < tabel.size() && tabel[indeks].getEvent() == aktuelEvent)
		{
			if (maxVarighedAktuelEvent < tabel[indeks].getDuration())
			{
				maxVarighedAktuelEvent = tabel[indeks].getDuration();
				maxTask = tabel[indeks].getTask();
			}
			if (minVarighedAktuelEvent > tabel[indeks].getDuration())	// S1
			{															// S1
				minVarighedAktuelEvent = tabel[indeks].getDuration();	// S1
				minTask = tabel[indeks].getTask();						// S1
			}															// S1		
			indeks++;

		}
		
		int eventSlack = maxVarighedAktuelEvent - minVarighedAktuelEvent;				// S1
		if (eventSlack > maxSlack)														// S1
		{																				// S1
			maxSlack = eventSlack;														// S1
			finalMinTask = minTask;														// S1
		}
		laengdeKritiskVej += maxVarighedAktuelEvent;
		kritiskVej += maxTask;
		maxVarighedAktuelEvent = 0;
		maxTask = "";
		minVarighedAktuelEvent = 999;	// S1
		minTask = "";					// S1 
		if (indeks == tabel.size())
			break;
		aktuelEvent = tabel[indeks].getEvent();

	}

	cout << "Længde af kritisk vej:  " << laengdeKritiskVej << endl;
	cout << "Kritisk vej:            " << kritiskVej << endl;
	cout << "Event med mest slack:   " << finalMinTask << " størst slack: " << maxSlack << endl;	// Supplerende opgave 1
	cout << "Slack ialt:             " << findTotalSlack(tabel) << endl;                            // Supplerende opgave 2  


	


	return 0;
}
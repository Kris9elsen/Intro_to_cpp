#include <iostream>
#include <typeinfo>

#include "KunstvaerkSamling.h"


KunstvaerkSamling::KunstvaerkSamling() {}

KunstvaerkSamling::KunstvaerkSamling(string enSamling)
{
    samling = enSamling;
    antal = 0;
}

void KunstvaerkSamling::addKunstvaerk(Kunstvaerk &etKunstvaerk)
{
    antal++;
    kunstvaerker.push_back(&etKunstvaerk);
}

void KunstvaerkSamling::findSangeMedFlereKomponister() const
{
    for(int i = 0; i < antal; i++)
    {
       
       Komposition *komp = dynamic_cast<Komposition *>(kunstvaerker[i]);

       if (komp != nullptr && komp->getOM() > 1)
           cout << komp->getTitel() << endl;
    }
    cout << endl;
}

void KunstvaerkSamling::findMalerierPaaMuseum(string etMuseum) const
{
    for (int i = 0; i < antal; i++)
    {
         Maleri* mal = dynamic_cast<Maleri *>(kunstvaerker[i]);

         if (mal != nullptr && mal->getMuseum().getNavn() == etMuseum)
             cout << mal->getTitel() << endl;
    }
    cout << endl;
}

void KunstvaerkSamling::beregnAntalLaesteSider() const
{
    int sider = 0;

    for (int i = 0; i < antal; i++)
    {
        Bog *b = dynamic_cast<Bog *>(kunstvaerker[i]);
        if (b != nullptr)
            sider += b->getAntalSider();
    }

    cout << sider << endl;
}

void KunstvaerkSamling::printAll() const
{

    cout << endl;

    for(int i = 0; i < antal; i++)
        cout << kunstvaerker[i]->getTitel() << endl;


    cout << endl;
}

KunstvaerkSamling::~KunstvaerkSamling() {}
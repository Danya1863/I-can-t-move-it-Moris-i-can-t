#pragma once
#include<iostream>
#include"Header1.h"
using namespace std;

class Animal : public IAnimal 
{
protected:
	string name;
	double kg;
	string continent;
public:
	Animal() = default;
	Animal(string n, double k, string cont)
	{
		name = n;
		kg = k;
		continent = cont;
	}
	virtual void Print()
	{
		cout << "Imya: " << name << endl;
		cout << "KG: " << kg << endl;
		cout << "Continent: " << continent << endl;
	}

};

class Parrot : public Animal, public IFly 
{
public:
	Parrot() = default;
	Parrot(string n, double k, string cont) :Animal(n, k, cont) {}


	virtual void Eat()
	{
		cout << "Papugai est: Morkov, Ogurez,  Myaso, Korm = Dve chainoi lozki \n";
	}
	virtual void Move()
	{
		cout << "Papugai kogda begaet v 1 hours  3 km \n";
	}

	virtual void Fly()
	{
		cout << "Papugai kogda letit naberaet 120 km.h \n";
	}

};

class Cat : public Animal
{
public:
	Cat() = default;
	Cat(string n, double k, string cont) :Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "Kot est: Ryba, myaso, = 12g kyIIIat = 1kg vesa kota \n";
	}
	virtual void Move()
	{
		cout << "Kot kogda bejit , probegaet 48 km za  1 hour\n";
	}
};

class Dog : public Animal
{
public:
	Dog() = default;
	Dog(string n, double k, string cont) :Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "Sobaka est: Ryba, myaso ,  = 4% ot vesa psa\n";
	}
	virtual void Move()
	{
		cout << "Sobaka kogda bejit , probegaet 32 km za  1 hour\n";
	}
};

class Penguin : public Animal, public ISwim
{
public:
	Penguin() = default;
	Penguin(string n, double k, string cont) :Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "Penguin est: ryba 600g raz v den\n";
	}
	virtual void Move()
	{
		cout << "Penguin kogda bejit , probegaet 6 km za  1 hour\n";
	}
	virtual void Swim()
	{
		cout << "Penguin kogda plavaet , proplivaet 36 km za 1 hour\n";
	}
};

class Dolpin : public Animal, public ISwim
{
public:
	Dolpin() = default;
	Dolpin(string n, double k, string cont) :Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "Delpin est: Ryba 10kg raz v  den\n";
	}
	virtual void Move()
	{
		cout << "Delpin cant move ( Moris I can't move it move it )\n";
	}
	virtual void Swim()
	{
		cout << "Delpin kogda plavaet , proplivaet 68 km za 1 hour\n";
	}
};
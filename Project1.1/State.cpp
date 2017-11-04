//   @author Kenyarda Thomas
//   @file State.cpp
//       CS 235  Project 1
//	Implementation of the Project 1
#include "State.h"
#include <iostream>
#include <string>
using namespace::std;

State::State()  //Default Constructor
{
	setName("Kansas");
	setAbbreviation("KS");
	setYear(1861);
	setPopulation(28590000);
	setCapitol("Topeka");
}

State::State(State & data)  //Copy Constructor
{
	setName(data.getName());
	setAbbreviation(data.getAbbreviation());
	setYear(data.getYear());
	setPopulation(data.getPopulation());
	setCapitol(data.getCapitol());
}

State::~State()  //Destructor
{
	//No dynamic memory
}
/*
*  Return name used in set method
*/
string State::getName(void)
{
	return name;
}
/*
* Return abbreviation used in set method
*/
string State::getAbbreviation(void)
{
	return abbreviation;
}
/*
* Return year used in set method
*/
int State::getYear(void)
{
	return year;
}
/*
* Return population used in set method
*/
int State::getPopulation(void)
{
	return population;
}
/*
* Return capitol used in set method
*/
string State::getCapitol(void)
{
	return capitol;
}
/*
* @param n - to set name of state
*/
void State::setName(string n)
{
	name = n;
}
/*
* @param a - to set the abbreviation of the state
*/
void State::setAbbreviation(string a)
{
	abbreviation = a;
}
/*
* @param y - to set the year the state joined Union
*/
void State::setYear(int y)
{
	year = y;
}
/*
* @param p - to set the population of state
*/
void State::setPopulation(int p)
{
	population = p;
}
/*
* @param c - to set the Capitol of the state
*/
void State::setCapitol(string c)
{
	capitol = c;
}
/*
*  Print out getters in a nice format
*/
void State::print(ostream & out)
{
	out << "State Name: " << getName() << " | ";
	out << "Abbreviation: " << getAbbreviation() << " | ";
	out << "Union Year: " << getYear() << " | ";
	out << " " << endl;
	out << "Population: " << getPopulation() << " | ";
	out << "Capitol: " << getCapitol() << " | ";
}


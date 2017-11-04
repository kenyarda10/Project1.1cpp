#pragma once
//   @author Kenyarda Thomas
//   @file State.h
//       CS 235  Project 1
//	Implementation of the Project 1

#ifndef STATE_H_INCLUDED
#define STATE_H_INCLUDED
#include <iostream>
#include <string>
#include <cstdlib>
using namespace::std;

class State

{
public:
	State();  //Default constructor
	State(State &); //Copy constructor

	~State();   //Destructor

				//Created get methods
	string getName(void);
	string getAbbreviation(void);
	int getYear(void);
	int getPopulation(void);
	string getCapitol(void);

	//Created set methods
	void setName(string n);
	void setAbbreviation(string a);
	void setYear(int y);
	void setPopulation(int p);
	void setCapitol(string c);

	void print(ostream &);  //Created a print method

private:
	string name;      //State name
	string abbreviation; //State abbreviation
	int year;             // Year admitted to the Union
	int population;   //State's population
	string capitol;   //State's capitol



};

#endif // STATE_H_INCLUDED



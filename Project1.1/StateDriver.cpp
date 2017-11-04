//   @author Kenyarda Thomas
//   @file StateDriver.cpp
//       CS 235  Project 1
//	Implementation of the Project 1

#include "State.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace::std;

void main()
{
	State example;
	const int MAXSIZE = 6;  //constant variable to be used for my State array size
	
	cout << "------------Test sets and Print function------------" << endl;
	example.setName("Mississippi");
	example.setAbbreviation("MS");
	example.setYear(1817);
	example.setPopulation(2970000);
	example.setCapitol("Jackson");

	example.print(cout);  // Testing print function

	cout << "" << endl;
	cout << "------------Test gets ---------------" << endl;
	cout << example.getName() << " - Should be Mississippi"<< endl;
	cout << example.getAbbreviation() << " - Should be MS" << endl;
	cout << example.getYear() << " - Should be 1817" << endl;
	cout << example.getPopulation() << " - Should be 29700000" << endl;
	cout << example.getCapitol() << " - Should be Jackson" << endl;

	cout << "" << endl;
	cout << "-------------------Test with array-----------------" << endl;

	State state[MAXSIZE];   //Create an array of state objects
	
	//initializers 
	int i=0;   
	string sname;
	string abb;
	int syear;
	int spop;
	string scap;


	while (i < MAXSIZE)    //created While loop so that user can input answers for array
	{
		cout << "Enter a State name" << ": " << endl;     //Need to press the "enter" key twice once you type in the state name
		cin.ignore(25, '\n');		
		getline(cin, sname);
		state[i].setName(sname);

		cout << "Enter a State abbreviation" << ": " << endl;
		cin >> abb;
		state[i].setAbbreviation(abb);

		cout << "Enter a State year in Union" << ": " << endl;
		cin >> syear;
		state[i].setYear(syear);

		cout << "Enter a State population" << ": " << endl;
		cin >> spop;
		state[i].setPopulation(spop);

		cout << "Enter a State Capitol" << ": " << endl;
		cin.ignore(25, '\n');
		getline(cin, scap);
		state[i].setCapitol(scap);
		 
		cout << endl;
		i++;

	}
	for (int i = 0; i < MAXSIZE; i++)   //array to use the print function to print out array
	state[i].print(cout);

	int pause; //added a pause to keep window up
	pause = 0;
	std::cin >> pause;
	return;
}

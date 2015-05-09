/*
	Created by hdan 
*/
#ifndef __PREDICATE_H__
#define __PREDICATE_H__

#include <string>
#include <iostream>
#include "Term.h"
using namespace std;

class Predicate{
	public:
		string name;
		int numberOfArguments;
		Term* listOfArguments;
		bool isNot;
		
		//construction - destroy - copy
		Predicate();
		Predicate(string strPredicate);
		~Predicate();
		//Redefine operators
		Predicate& operator=(const Predicate&);
		friend ostream& operator << (ostream& , Predicate& );
		//Others functions
		static bool isPredicate(string);
	
};
#endif

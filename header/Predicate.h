/*
	Created by hdan 
*/
#ifndef __PREDICATE_H__
#define __PREDICATE_H__

#include <string>

#include "Term.h"
using namespace std;


class Predicate{
	public:
		string name;
		int numberOfArguments;
		Term* Arguments;
		bool isNot;
		//construction - destroy - copy
		Predicate();
		Predicate(string strPredicate);
		~Predicate();
		//Redefine operators
		Predicate& operator=(const Predicate&);
		//Others functions
		void print();
};
#endif

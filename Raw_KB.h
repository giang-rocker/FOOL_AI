/*
	Name: Raw_KB .h
	Copyright:
	Author: Cao Hoang Giang
	Date:
	Description: Prototype of Raw_KB
				list of Tree.
*/
//include

#ifndef Raw_KB_h
#define Raw_KB_h

#include "Tree.h"
#include "Variable.h"
#include "Predicate"
#include "Quatifier"

class Raw_KB {
public:
	Tree* listOfTree // a sentence of KB
	Term* listOfVariable;
	Term* listOfQuantifier;
	Term* listOfPredicate;
	
	int numOfTree;
	int numOfVariable;
	int numOfPredicate;
	int numOfConstant;

//construction - destroy - copy
	Raw_KB();
	Raw_KB (const Raw_KB&  )
	Raw_KB& operator = (const Raw_KB&);
	~Raw_KB();
// function
	
	CNF_KB ConverToCNF_KB(); // return to a list of Clause Form use as KB;


};




#endif

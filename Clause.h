/*
	Name: Clause.h
	Copyright:
	Author: Cao Hoang Giang
	Date:
	Description: Prototype of Clause
				List of Predicate after aply rules to RawSentence of RawKB
*/
//include

#ifndef Clause_h
#define Clause_h

#include "Predicate.h"

class Clause {
public:
// attribute
	Predicate* listOfPredicate
	int numOfPredicate ;

//construction - destroy - copy
	Clause ();
	Clause(const& Clause );
	Clause(Predicate*);
	Clause& operator = (const& Clause);
	
	~Clause ();



};




#endif

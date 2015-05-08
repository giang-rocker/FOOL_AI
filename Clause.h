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

class Clause {
public:
// attribute
	Predicate* listOfPredicate
	int numOfPredicate ;

//construction - destroy - copy
	Clause ();
	Clause(const& Clause );
	Clause(Predicate*);
	Clause& operate = (const& Clause);
	
	~Clause ();



};




#endif

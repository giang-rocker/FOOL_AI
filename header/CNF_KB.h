/*
	Name: CNF_KB.h
	Copyright:
	Author: Cao Hoang Giang
	Date:
	Description: Prototype of CNF_KB
				list of Clause. Each Clause contant list of  Predicate
*/
//include

#ifndef CNF_KB_H
#define CNF_KB_H

#include "Clause.h"

class CNF_KB {
public:
	// attribute
	Clause* listOfClause;
	int numOfClause;
	
//construction - destroy - copy
	CNF_KB();
	CNF_KB(const CNF_KB&);
	~CNF_KB();
	CNF_KB& operator = ( const CNF_KB&);

// function






};




#endif

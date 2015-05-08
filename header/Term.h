/*
	Name: Term.h
	Copyright:
	Author: Cao Hoang Giang
	Date:
	Description: Prototype of Term
				Variable or Function or Constant
*/
//include

#ifndef Term_h
#define Term_h

#include <cstring>
using namespace std;

enum TermType {
	VARIABLE,
	CONSTANT,
	FUNCTION
};

class Term {
public:
	// attribute
	TermType type;
	string value;
	
 
//construction - destroy - copy
	Term();
	Term(TermType);
	Term(TermType,string);
	Term(const Term&);
	Term& operator = (const Term);

// function
	


};


#endif



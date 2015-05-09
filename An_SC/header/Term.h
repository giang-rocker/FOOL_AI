/*
	Name: Term.h
	Copyright:
	Author: Cao Hoang Giang
	Date:
	Description: Prototype of Term
				Variable or Function or Constant
*/
#ifndef Term_h
#define Term_h

#include <list>
#include <string>

using namespace std;

enum TermType {
		VARIABLE,
		CONSTANT,
		FUNCTION
};

class Term {
public:
	//Properties
	TermType type;
	string value;
	list<Term*> listOfArguments;
	
	//Constructors - Copy Constructor - Destructor
	Term();
//	Term(TermType);
	Term(TermType,string);
//	Term(TermType,string,Term*);
	
	Term(const Term&);
	
	~Term();
	
	//Operators overloading
	Term& operator = (const Term&);
	friend ostream& operator << (ostream&, Term&);
	//Other methods
};
#endif



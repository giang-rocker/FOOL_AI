/*
	Name: Term.cpp
	Copyright:
	Author: Cao Hoang Giang
	Date:
	Description: Definition of Term
*/
//include


#ifndef Term_cpp
#define Term_cpp

#include "Header//Term.h"

/*
	TermType type;
	string value;
	
*/

	Term::Term(){}
	
	Term::Term(TermType _type)  {
		this->type = _type;
	}
	
	Term::Term(TermType _type,string _value) {
		this->type = _type;
		this->_value = _value;
	}
	Term::Term(const Term& _term) {
		this->type = _term.type;
		this->value = _term.value;
	}
	Term&  Term::operator = (const &Term _term) {
		this->type = _term.type;
		this->value = _term.value;
		
		return *this;
	}


#endif






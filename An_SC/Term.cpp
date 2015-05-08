#include "../header/Term.h"
Term::Term(){}
	
Term::Term(TermType _type)  {
	this->type = _type;
}

Term::Term(TermType _type,string _value) {
	this->type = _type;
	this->value = _value;
}
Term::Term(const Term& _term) {
	this->type = _term.type;
	this->value = _term.value;
}
Term&  Term::operator = (const Term& _term) {
	this->type = _term.type;
	this->value = _term.value;
	
	return *this;
}

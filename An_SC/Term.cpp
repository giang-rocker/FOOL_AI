#include <string>
#include <iostream>

#include "header/Term.h"

using namespace std;
//Constructors - Copy Constructor - Destructor
Term::Term(){
	this->type=VARIABLE;
	this->value="";
}
	
//Term::Term(TermType _type)  {
//	this->type = _type;
//	this->value="";
//	this->listOfArguments=NULL;
//	this->numberOfArguments=0;
//}

Term::Term(TermType _type,string _value) { //no done
	this->type = _type;
	if(_type==CONSTANT||_type==VARIABLE)
		this->value = _value;
	else if(_type==FUNCTION){
		string::iterator it=_value.begin();
	}
}
//Term::Term(TermType _type,string _value,Term* _listOfArguments,int _numberOfArguments){
//	this->type = _type;
//	this->value = _value;
//	this->listOfArguments=_listOfArguments;
//	this->numberOfArguments=_numberOfArguments;
//}

Term::Term(const Term& _term) {
	this->type = _term.type;
	this->value = _term.value;
}

Term::~Term(){
}

//Operators overloading
Term&  Term::operator = (const Term& _term) {
	this->type = _term.type;
	this->value = _term.value;
	
	return *this;
}

ostream& operator << (ostream& os, Term& _term){
	string type;
	if(_term.type==VARIABLE)
		type="VARIABLE";
	else if(_term.type==CONSTANT)
		type="CONSTANT";
	else if(_term.type==FUNCTION)
		type="FUNCTION";
	else
		type="Type error: no type";
		
	os <<"Term:"<<"{Type: "<<type<<", Name/Value: "<<_term.value<<"}"<<endl;
	return os;
}
//ostream& operator << (ostream& os, Term* _term){
//	string type;
//	if(_term->type==VARIABLE)
//		type="VARIABLE";
//	else if(_term->type==CONSTANT)
//		type="CONSTANT";
//	else if(_term->type==FUNCTION)
//		type="FUNCTION";
//	else
//		type="Type error: no type";
//		
//	os <<"Term:"<<"{Type: "<<type<<", Name/Value: "<<_term->value<<"}";
//	return os;
//}
//Other methods

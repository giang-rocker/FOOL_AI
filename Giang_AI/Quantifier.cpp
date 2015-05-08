/*
	Name: Quantifier.cpp
	Copyright:
	Author: Cao Hoang Giang
	Date:
	Description: Definition of Quantifier
*/
//include


#ifndef Quantifier_cpp
#define Quantifier_cpp

	Quantifier::Quantifier(){}
	
	Quantifier::Quantifier(TypeQuantifier _type)  {
		this->type = _type;
	}
	
	Quantifier::Quantifier(TypeQuantifier _type,string _value) {
		this->type = _type;
		this->_value = _value;
	}
	Quantifier::Quantifier(const Quantifier& _term) {
		this->type = _term.type;
 		this->variable = _term.variable;
 	}
	Quantifier&  Quantifier::operator = (const &Quantifier _term) {
		this->type = _term.type;
 		this->variable = _term.variable;
		
		return *this;
	}


	Quantifier::Quantifier(string _input):	Quantifier ( getQuantifierType(_input ) {}
	
	QuantifierType Quantifier::getQuantifierType (string _input) {
		if (_input=="FORALL") return FORALL;
		if (_input=="EXIST") return EXIST;
 
	}
		
 
#endif







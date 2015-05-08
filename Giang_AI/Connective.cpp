/*
	Name: Connective.cpp
	Copyright:
	Author: Cao Hoang Giang
	Date:
	Description: Definition of Connective
*/
//include

#ifndef Connective_cpp
#define Connective_cpp

#include "Header//Connective.h"

	Connective::Connective(){}
	
	Connective::Connective(ConnectiveType _type)  {
		this->type = _type;
	}
	
 	Connective::Connective(const Connective& _connective) {
		this->type = _connective.type;
	}
	Connective&  Connective::operator = (const &Connective _connective) {
		this->type = _connective.type;
		return *this;
	}

	Connective::Connective(string _input):	Connective ( getConnectiveType(input ) {}
	
	ConnectiveType Connective::getConnectiveType (string _input) {
		if (_input=="AND") return AND;
		if (_input=="OR") return OR;
		if (_input=="IMPLIES") return IMPLIES;
		if (_input=="MUTUAL_IMPLICATION") return MUTUAL_IMPLICATIONS;
	}
		
	int Connective::getPriority(){
		if (this->type == NOT ) return 1;
		if (this->type == AND ) return 2;
		if (this->type == OR ) return 3;
		if (this->type == IMPLIES ) return 4;
		if (this->type == MUTUAL_IMPLICATION ) return 5;
	
		}


#endif

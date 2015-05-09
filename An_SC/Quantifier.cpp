#include <iostream>
#include "header/Quantifier.h"

Quantifier::Quantifier (){
	this->type=FORALL;
	this->variable="";
}

Quantifier::Quantifier(TypeQuantifier t, string variable){
	this->type=t;
	this->variable=variable;
}
 
//Operators overloading
ostream& operator << (ostream& os, Quantifier& q){
	string t;
	if(q.type==FORALL)
		t="FORALL";
	else if(q.type==EXIST)
		t="EXIST";
	os<<"Quantifier:{type: "<<t<<", Variable: "<< q.variable<<"}"<<endl;
	return os;
}

//get set


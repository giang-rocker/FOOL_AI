/*
	Created by hdan
*/
#ifndef __QUANTIFIER_H__
#define __QUANTIFIER_H__
#include "Term.h"

class Quantifier{
	public:
		enum TypeQuantifier{FORALL,EXIST};
		TypeQuantifier type;
		Term variable;
		
	Quantifier ();
	Quantifier (TypeQuantifier );
	Quantifier (string );
 

//get set
	void setVariable (Term );
	
	void print ();
		
};
#endif

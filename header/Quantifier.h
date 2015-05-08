/*
	Created by hdan
*/
#ifndef __QUANTIFIER_H__
#define __QUANTIFIER_H__
#include "Term.h"

enum TypeQuantifier{FORALL,EXIST};
	TypeQuantifier type;
	Term variable;
class Quantifier{
	public:

		
	Quantifier ();
	Quantifier (TypeQuantifier );
	Quantifier (string );
 

//get set
	void setVariable (Term );
	
	void print ();
		
};
#endif

/*
	Created by hdan
*/
#ifndef __QUANTIFIER_H__
#define __QUANTIFIER_H__
#include "Term.h"

enum TypeQuantifier{FORALL,EXIST};

class Quantifier{
	public:
		TypeQuantifier type;
		Term variable;	
		
		Quantifier ();
		Quantifier (TypeQuantifier );
		Quantifier (string );
 
//get set
	void setVariable (Term& );
	
	void print ();
		
};
#endif

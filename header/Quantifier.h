/*
	Created by hdan
*/
#ifndef __QUANTIFIER_H__
#define __QUANTIFIER_H__
include "Term.h"

class Quantifier{
	public:
		enum TypeQuantifier{FORALL,EXIST};
		TypeQuantifer type;
		Term variable;
		
	Quantifier ();
	Quantifier (TypeQuantifier );
	Quantifier (string );
	Quantifier (TypeQuantifier  ) ;
 

//get set
	Variable getVariable ();
	
	void setVariable (Variable );
	
	void print ();
		
}
#endif

/*
	Created by hdan
*/
#ifndef __QUANTIFIER_H__
#define __QUANTIFIER_H__
#include <string>
#include "Term.h"

enum TypeQuantifier{FORALL,EXIST};

class Quantifier{
	public:
		TypeQuantifier type;
		string variable;	
		
		//Constructors - Copy Constructor - Destructor
		Quantifier ();
		Quantifier (TypeQuantifier,string );

		//Operators overloading
		friend ostream& operator <<(ostream&, Quantifier&);
		
		//get set


		
};
#endif

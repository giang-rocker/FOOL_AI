/*
	Created by hdan
*/
#ifndef __QUANTIFIER_H__
#define __QUANTIFIER_H__
include "Term.h"

class Quantifier{
	public:
		enum TypeQuantifer{FORALL,EXIST};
		TypeQuantifer type;
		Term variable;
}
#endif

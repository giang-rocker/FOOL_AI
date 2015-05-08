/*
	Created by hdan
*/
#ifndef __NODE_H__
#define __NODE_H__
#include "Node.h"

class Tree{
	public:
		Node* root;
		
		Tree(); // construct method		
		void eliminateArrow();
		void driveInNegation();
		void renameVariableApart();
		void skolemization();
		void distributeOrOverAnd();
		void renameVariablesApartInClauses();
		void print(); //print sentence
}
#endif

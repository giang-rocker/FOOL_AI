/*
	Name: Node.h
	Copyright:
	Author: Cao Hoang Giang
	Date:
	Description: Prototype of Node. List of Node will create a tree;
				
*/
//include

#indef Node_h
#define Node_h

#incldue "Quantifier.h"
#include "Connective.h"
#include "Predicate.h"

class Node {
public :
	Node* left;
	Node* right
	Node* parent;
	bool isNot;
	Quantifier* listQuantifier;
	Connective connective;
	Predicate predicate;

//construction - destroy - copy
	Node();
	Node( Connective );
	Node(Predicate);
	Node(Node&);
	~Node();
	Node& operator = (const Node&);
// function
	
	bool isConnective();
	bool isPredicate();
	Node* getParent();
	Node* getLeft();
	Node* getRight();
	Quantifier* getListOfQuantifier();
	void addQuantifier(Quantifier* );


};




#endif Node_h

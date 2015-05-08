/*
	Name: Connective.h
	Copyright:
	Author: Cao Hoang Giang
	Date:
	Description: Prototype of Connective
*/
//include

#ifndef Connectve_h
#define Connective_h

enum ConnectiveType {
	NOT,
	AND,
	OR,
	IMPLIES,
	MUTUAL_IMPLICATIONS
}

class Connective {
public :
// attribute
	ConnectiveType type;
public:
//construction - destroy - copy
	Connective();
	Connective(ConnectiveType);
	Connective(const Connectve&);
	Connective& operate= (const Connective&);

// function
	int getPriority();
	




};





#endif

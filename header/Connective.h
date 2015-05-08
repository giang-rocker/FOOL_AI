/*
	Name: Connective.h
	Copyright:
	Author: Cao Hoang Giang
	Date:
	Description: Prototype of Connective
*/
//include

#ifndef connective_h
#define connective_h

enum ConnectiveType {
	NOT,
	AND,
	OR,
	IMPLIES,
	MUTUAL_IMPLICATIONS
};

class Connective {
public :
// attribute
	ConnectiveType type;
public:
//construction - destroy - copy
	Connective();
	Connective(ConnectiveType);
	Connective(const Connective&);
	Connective& operator = (const Connective&);

// function
	int getPriority();
	




};





#endif

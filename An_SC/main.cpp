#include <iostream>
#include <list>
#include "header/Raw_KB.h"
#include "header/Tree.h"
#include "header/Tree.h"
#include "header/Node.h"
#include "header/Term.h"
#include "header/Term.h"
#include "header/Predicate.h"
#include "header/Connective.h"
#include "header/Connective.h"
#include "header/Quantifier.h"
#include "header/Quantifier.h"
#include "header/CNF_KB.h"
#include "header/Clause.h"

using namespace std;
const string STR_FORALL = "Forall";
const string STR_EXIST = "Exist";
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
list<string> elementSeperate(string sentence);

int main(int argc, char** argv) {
//	Term *x=new Term();
//	cout<<*x;
//
//	Quantifier *q=NULL;
//	q=new Quantifier(FORALL,"X");
//	cout<<*q;
	list<string> l;
	l=elementSeperate("Forall X Forall Y [WantToKill(X,Y) & Jedi(Y) => ! Jedi(X)]");
	for(list<string>::iterator it=l.begin();it != l.end();it++){
		cout<<*it<<endl;
	}
	return 0;
}


list<string> elementSeperate(string sentence){
	list<string> l,listElement;
	string v="";
	for(unsigned i=0;i<sentence.length();i++){
		char c=sentence.at(i);
		if(c!=' '){
			v+=c;
		}		
		
		if(c==' '||c=='['||c==']'||(c==')'&&(sentence.at(i+1)==']'))){
			if(v.compare(""))
				l.push_back(v);
			v="";
		}
		if(i+1==sentence.length()){
		}
	}
	
	for(list<string>::iterator it=l.begin();it != l.end();it++){
		if((*it).compare(STR_FORALL)==0||(*it).compare(STR_EXIST)==0){
			string s;
			s=*it;
			it++;
			s=s+" "+*it;
			listElement.push_back(s);
		}else{
			listElement.push_back(*it);
		}
	}
	return listElement;
}



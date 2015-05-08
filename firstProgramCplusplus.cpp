#include<iostream>
#include<conio.h>

using namespace std;

int tong(int);

int main(){
	cout << "tong = " <<tong(100);
	return 0;
}
int tong(int n){
		int s=0;
		for(int i=0;i<=n;i++){
			s+=i;
		}
		return s;
}
	


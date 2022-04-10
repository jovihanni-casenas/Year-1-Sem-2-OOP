#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Quiz{
	private:
		string put, piece[100], pattern, replace;
		char broke[100], repBroke[50];
		int i, find, j, y, p, x;
	public:
		void input();
		void breakString();
		void checkString();
		void output();
};


int main(int argc, char** argv) {
	Quiz cielo;
	cielo.input();
	cielo.breakString();
	cielo.output();
	return 0;
}

void Quiz::input(){
	cout<<"Input string: ";
	getline(cin, put);
	cout<<"Input Pattern: ";
	cin>>pattern;
	cout<<"Input replacement: ";
	cin>>replace;
	cout<<"Output: ";
}

void Quiz::breakString(){
	p=0;
	stringstream nn(replace);
	while(nn>>repBroke[p]) p++;
	i=0;
	stringstream ss(put);
	while(ss>>piece[i]){
		find=piece[i].find(pattern, 0); 
		if(find>=0) checkString();
		i++;
	}
}

void Quiz::checkString(){
	j=0;
	stringstream kk(piece[i]);
	while(kk>>broke[j]) j++;
	for(x=find, y=0;x<find+p;x++, y++){ 
		broke[x]=repBroke[y]; 
	}
	piece[i]=broke;
}

void Quiz::output(){
	for(y=0;y<i;y++){
		cout<<piece[y]<<' ';
	}
}

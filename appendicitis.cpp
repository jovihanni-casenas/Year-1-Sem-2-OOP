#include <iostream>
#include <cstring>
#include <sstream>
#include <algorithm>
#include "appendicitis.h"
using namespace std;

string put, part, append, piece[100], sub1, sub2;
int i, j;

void App::input(){
	cout<<"Input string: ";
	getline(cin, put);
	cout<<"Input part: ";
	getline(cin, part);
	cout<<"Word to append: ";
	getline(cin, append);
	cout<<"Output: ";
}

void App::breakString(){
	i=0;
	j=0;
	stringstream ss(put);
	while(ss>>piece[i]){
		j=0; 
		appendMore();
		cout<<piece[i]<<' ';
		i++;
	}
}

void App::appendMore(){ //cout<<find+part.length();
	int find=piece[i].find(part, j);
	if(find>=0){ //cout<<j<<" si j ko\n"<<find<<" am find"<<endl;
		sub1=piece[i].substr(0, find+part.length());
		sub2=piece[i].substr(find+part.length(), piece[i].length());
		piece[i]=sub1+append+sub2;
		j=sub1.length()+append.length(); //cout<<piece[i]<<endl;
		appendMore();
	}
}


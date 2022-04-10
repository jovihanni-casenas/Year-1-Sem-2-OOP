#include <iostream>
#include <cstring>
#include <sstream>
#include "rotate.h"
using namespace std;

string put, word, piece[50], append, keeper[50];
int i, z, rotate;

void Rotate::input(){
	cout<<"Input string: ";
	getline(cin, put); //cout<<put<<endl;
	cout<<"Word: ";
	cin>>word;
	append=word+word; //cout<<append<<endl;
	cout<<"Rotation: ";
	cin>>rotate; //cout<<rotate<<endl;
	cout<<"Output: ";
}

void Rotate::pieces(){
	i=0;
	stringstream ss(put);
	while(ss>>piece[i]){
		finder();
		i++;
	}
}

void Rotate::finder(){
	int find=append.find(piece[i], 0);
	if(find==rotate) keep();
}

void Rotate::keep(){
	keeper[z]=piece[i];
	z++;
}

void Rotate::output(){
	if(z>0){
		cout<<word<<' ';
		for(int a=0;a<z;a++) cout<<keeper[a]<<' ';
	}
}

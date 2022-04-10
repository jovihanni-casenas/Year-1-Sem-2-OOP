#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Substr{
	private:
		string put, word, found[50], find1, find2, maxword;
		int i, j, k=0, findstr, max=0, m;
	public:
		void input();
		void inspect();
		void store();
		void output();
};

int main(int argc, char** argv) {
	Substr str;
	str.input();
	str.inspect();
	return 0;
}

void Substr::input(){
	cout<<"Input string 1: ";
	cin>>put;
	cout<<"Input string 2: ";
	cin>>word;
	cout<<"Output: ";
}

void Substr::inspect(){
	i=0;
	int max=0;
	while(i<word.length()){
		/*find1=word.substr(i, word.length()); 
		find2=word.substr(0, j);
		i++;
		j--; */
		for(m=i;m<word.length();m++){
			find1=word.substr(i, m);
			store();
		}
		i++;
	}
	output();
}

void Substr::store(){
	findstr=put.find(find1, 0);
	if(findstr>=0){
		found[k]=find1; 
		k++;
	}
}

void Substr::output(){
	for(i=0;i<k;i++){
		if(found[i].length()>max){
			max=found[i].length();
			maxword=found[i];
		}
	}
	cout<<maxword;
}

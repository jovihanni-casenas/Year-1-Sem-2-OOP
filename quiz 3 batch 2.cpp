#include <iostream>
#include <cstring>
#include <sstream>
#include "rotate.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Rotate rot;
	rot.input();
	rot.pieces();
	rot.output();
	return 0;
}



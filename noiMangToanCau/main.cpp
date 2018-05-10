#include<iostream>
#include<cstdlib>
#include<time.h>
#include<bitset>
#include <string>
using namespace std;

int main() {
	srand(time(NULL));
	string bit="";
	int key = 96;
	string x = "|)|-|[][' |)3'0 |)3.|^ 13/\1. ";
		char y[30];


		for (int i = 0; i < 30; i++) {
		y[i] = x[i] ^ key;
	}
	for (int i = 0; i < 30; i++) {
		for (int j = 7; j >=0; j--) {
			if ((y[i] >> j) & 1 == 1) bit = bit + '1';
			else bit = bit + '0';
		}
	}
	string stringmahoa = "";
	for (int i = 0; i < 48; i++) {
		char z = 0x20;
		for (int j = 0; j <= 4; j++) {
			if (bit[i * 5 + j] == '1') {
				z = z | (1 << (4 - j));
			}
		}
		stringmahoa = stringmahoa + z;
	}
	cout << stringmahoa;
	cout << endl;
	return 0;

}
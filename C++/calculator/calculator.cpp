#include <stdio.h>
#include <fstream>
#include <iostream>
using namespace std;

float adding(float num1, float num2);

//Adding Function
float adding(float num1, float num2){
	float result;
	result = num1 + num2;
	return result;
}

int main(int argc, float argv[]){
	float ret;
	float num1;
	float num2;

	if (argc != 2){
		printf("Please PLace 2 arguments");
		return 1;
	}
	else {
		num1 = argv[1];
		num2 = argv[2];
		ret = adding(num1, num2);
		cout << "Adding: " << ret << endl;
		return 0;
	}
}

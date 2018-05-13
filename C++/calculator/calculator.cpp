#include <stdio.h>
#include <iostream>
using namespace std;

float adding(float num1, float num2);

//Adding Function
float adding(float num1, float num2){
	float result;
	result = num1 + num2;
	return result;
}

int main(void){
	float ret;

	ret = adding(1, 9);
	cout << "Adding: " << ret << endl;
	return 0;
}

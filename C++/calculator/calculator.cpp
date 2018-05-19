#include <stdio.h>
#include <fstream>
#include <iostream>
using namespace std;

float adding(float num1, float num2);
float subtracting(float num1, float num2);

//Adding Function
float adding(float num1, float num2){
	float result;
	result = num1 + num2;
	return result;
}

//subtracting function
float subtracting(float num1, float num2){
	float result;
	result = num1 - num2;
	return result;
}

int main(){
	float ret;
	float num1;
	float num2;

	num1 = 1;
	num2 = 4;
	ret = adding(num1, num2);
	cout << "Adding: " << ret << endl;
	return 0;
}

#include <stdio.h>
#include <fstream>
#include <iostream>
using namespace std;

//Adding Function
float adding(float num1, float num2){
	float result;
	result = num1 + num2;
	return result;
}

//Subtracting function
float subtracting(float num1, float num2){
	float result;
	result = num1 - num2;
	return result;
}

//Times function
float times(float num1, float num2){
	float result;
	result = num1 * num2;
	return result;
}

//Dividing function
float divid(float num1, float num2){
	float result;
	result = num1 / num2;
	return result;
}


int main(){
	float ret;
	float num1;
	float num2;

	num1 = 1;
	num2 = 4;
	ret = adding(num1, num2);
	cout << "+: " << ret << endl;
	ret = subtracting(num1, num2);
	cout << "-: " << ret << endl;
	ret = times(num1, num2);
	cout << "*: " << ret << endl;
	ret = divid(num1, num2);
	cout << "/: " << ret << endl;

	return 0;
}

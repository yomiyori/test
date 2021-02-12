#include<iostream>
#include <stdbool.h>
#include <Windows.h>
using namespace std;

int main() {
	string name;

	cout << "Write your name" << endl;
	cin >> name;


	string weight;

	cout << "Write your weight" << endl;
	cin >> weight;


	string height;

	cout << "Write your height" << endl;
	cin >> height;



	string questionnaire;

	cout << "Your questionnaire has: " << endl;
	Sleep(500);
	cout << "Your name: " << name << endl;
	Sleep(500);
	cout << "Your weight: " << weight << endl;
	Sleep(500);
	cout << "Your height: " << height << endl;
	cout << "  " << endl;
	cout << "  " << endl;
	cout << "  " << endl;
	cout << "  " << endl;
	cout << "  " << endl;
	cout << "  " << endl;

	Sleep(1000);

	bool res;
	string s;

	cout << "answer yes or no (just test)" << endl;
	cin >> s;
	if (s == "No")          res = true;
	else if (s == "Yes")    res = false;
	else cout << "i don't know why but this message creates if you answer and yes, and no" << endl;


}
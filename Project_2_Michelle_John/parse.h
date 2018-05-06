#pragma once
#include <cctype> 
#include <iostream> 
#include <string> 

using namespace std;

static string parseThisName() {
	char alnum;
	string name = "";

	cin >> ws;
	while (isalnum(cin.peek())) {
		cin >> alnum;
		name += alnum;
	}
	return name;
}
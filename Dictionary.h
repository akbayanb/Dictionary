#pragma once

#include <map>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
class Dictionary {
	map<string, string> words;
public:
	void add(string word, string description);
	string search(string word);
	void remove(string word);
	void print();


};
#include "Dictionary.h"

void Dictionary::add(string word, string description)
{
	words[word] = description;
}

string Dictionary::search(string word)
{
	auto it = words.find(word);
	if (it != words.end()) {
		return it->second;
	}
	else return "";
}

void Dictionary::remove(string word)
{
	bool flag = false;
	auto it = words.find(word);
	if (it != words.end()) {
		cout << it->second << endl;
		cout << "Are you sure to delete this word from dictionary?" << endl;
		cout << "0 - No, 1-Yes" << endl;
		cin >> flag;
		if (flag) {
			words.erase(it);
		}
		
	}
	
}

void Dictionary::print()
{
	for_each(words.begin(), words.end(), [](pair<string, string> p) {cout << "word: " << p.first << endl << "description: " << p.second << endl<<endl; });
}

#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Reader{
public:
	void readFile(const char* file_path, vector<string>& words)
	{
		ifstream file(file_path);
		string word;
		while (file >> word)
		{
			words.push_back(word);
		}
	}
};
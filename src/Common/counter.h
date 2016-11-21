#include <map>
#include <vector>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class myCount{
public:
	void countUni(const vector<string>& words, map<string, double>& unigram)
	{
		for (int i = 0; i < words.size(); i++)
			unigram[words[i]]++;
		for (map<string, double>::iterator it = unigram.begin(); it != unigram.end(); it++)
		{
			it->second /= words.size();
			it->second = log(it->second);
		}
	}
	void countBi(const vector<string>& words, map<string, double>& bigram)
	{
		map<string, double> unigram;
		for (int i = 0; i < words.size(); i++)
			unigram[words[i]]++;
		for (int i = 0; i < words.size() - 1; i++)
			bigram[words[i] + "#" + words[i + 1]]++;
		int pos;
		string first_word;
		for (map<string, double>::iterator it = bigram.begin(); it != bigram.end(); it++)
		{
			pos = it->first.find("#");
			first_word = it->first.substr(0, pos);
			it->second /= unigram[first_word];
			it->second = log(it->second);
		}

	}
};
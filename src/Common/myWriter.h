#include <fstream>
#include <map>
#include <string>

using namespace std;

class Writer{
public:
	void writeFile(const char* file_path, map<string, double>& ngram)
	{
		ofstream file(file_path);
		for (map<string, double>::iterator it = ngram.begin(); it != ngram.end(); it++)
			file << it->first << " " << it->second << endl;
		file.close();
	}
};
#include "myReader.h" 
#include "counter.h"
#include "myWriter.h"

#include <map>

using namespace std;


int main(int argc, char* argv[])
{
	Reader the_reader;
	vector<string> words;
	the_reader.readFile(argv[1], words);
	myCount the_count;
	map<string, double> unigram;
	the_count.countUni(words, unigram);
	Writer the_writer;
	the_writer.writeFile(argv[2], unigram);
	return 0;
}
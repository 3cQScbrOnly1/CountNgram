#include "myReader.h"
#include "counter.h" 
#include "myWriter.h"

int main(int argc, char* argv[])
{
	Reader the_reader;
	vector<string> words;
	the_reader.readFile(argv[1], words);
	myCount the_count;
	map<string, double> bigram;
	the_count.countBi(words, bigram);
	Writer the_writer;
	the_writer.writeFile(argv[2], bigram);
	return 0;
}
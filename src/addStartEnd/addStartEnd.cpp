#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	ifstream raw_file(argv[1]);
	ofstream output_file(argv[2]);
	string line;
	while (getline(raw_file, line))
	{
		if (line != "")
			output_file << "<s>  " << line << "</s>" << endl;
	}
	raw_file.close();
	output_file.close();
	return 0;
}
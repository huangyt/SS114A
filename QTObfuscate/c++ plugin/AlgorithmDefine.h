
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <fstream>
#include <algorithm>
#include <time.h>
#include <cstdlib>
#include <sstream>
#include <ctype.h>

#define ADD_REDUNDANCY 2
#define RAND_NAME "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define NUM_NAME 4
#define MAX_CHARACTER_ALLOWED 80
#define BLOCKS_PER_ROW 7

using namespace std;

char rand_alnum();

class AlgorithmDefine {
private:

    vector<string> m_listOfDefine;
    vector<string> m_listOfInclude;
    vector<string> m_listOfBlocks;
    set<string> m_duplicateCheck;

public:
	AlgorithmDefine(){srand ( time(NULL) );}

	bool algorithm(string& s_input, string& s_sourceOutput, string& s_headerOutput,
                vector<string>& set_listOfHeaderFiles, bool& b_addHeaderFile);

	void writeToFile(const string& s_fileName,const string& s_input);
	void format(vector<string>& v_input, string& s_output);
	string addSpace(int i_numSpaces);

	string rand_alnum_str (std::string::size_type sz);
	void skipQuote(const string& s_input, int& i_skip, char c_quote = '\"');
	void skipHeader(const string& s_input, int& i_skip, char c_bracket);

	void modifyOther(string& s_input, string& s_randOutput, string& s_output);
	void modifyString(string& s_input, string& s_randOutput, string& s_output);
	void randomiseString(string& s_inOutput, vector<int>& v_charPos);
	string nameGenerator(string& s_name, int i_num);

		// skip comment
	void removeComment(string& s_input, int& i_skip);
};





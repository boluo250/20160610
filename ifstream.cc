 ///
 /// @file    ifstream.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-11 21:56:02
 ///
 
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ifstream ifs("cinignore.cc");
	if(!ifs.good())
	{
		cout << "ifstream open error" << endl;
		return -1;
	}

	vector<string> vecstr;
	
	string str;
	while(getline(ifs,str))
	{
		vecstr.push_back(str);
	}

	for(auto & elem:vecstr)
	{
		cout << elem << endl;
	}

	ifs.close();
	return 0;
}




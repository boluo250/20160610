 ///
 /// @file    fstream.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-11 23:24:43
 ///
 
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream fs("test.dat"); //要求文件是存在的

	int num;
	int idx;

	for(idx = 0; idx != 10;++idx)
	{
		cin >> num;
		fs << num << ' ';
	}

	cout << fs.tellp() << endl;
	fs.seekp(0,fstream::beg);

	for(idx = 0; idx != 10; ++idx)
	{
		fs >> num;
		cout << num << ' ';
	}

	fs.close();

	return 0;
}

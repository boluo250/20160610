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
	ofstream ofs("data.bat");//文件不存在,会自动创建,文件存在会删除以前的数据
	string str;
	while(getline(ifs,str))
	{
		ofs << str << endl;
	}

	ofs.close();
	ifs.close();
	return 0;
}




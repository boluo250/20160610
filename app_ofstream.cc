 ///
 /// @file    app_ofstream.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-11 22:47:54
 ///
 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ofstream ofs("data.bat",ofstream::app);//写文件不能用apt模式,只能app到文件末尾

	cout << ofs.tellp() << endl;//返回当前文件的指针,

	string str = "add new str";
	ofs << str << endl;

	cout << ofs.tellp() << endl;

	ofs.close();

	return 0;
}



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
	ifstream ifs("data.bat",ifstream::ate);//只对输入流起作用

	cout << ifs.tellg() << endl;//返回当前文件的指针,


	ifs.close();

	return 0;
}



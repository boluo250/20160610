 ///
 /// @file    cinignore.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-11 11:10:06
 ///
 
#include <iostream>
#include <limits> 
using namespace std;

int main()
{
	int val;

	while(cin >> val,!cin.eof())
	{
		if(cin.bad())
		{
			cout << "io stream corrupt" << endl;
			return -1;
		}
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout << "data illegal,try again!" << endl;
			continue;
		}
		cout << "val=" << val << endl;
	}

	return 0;
}

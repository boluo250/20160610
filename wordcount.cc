 ///
 /// @file    wordcount.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-12 11:31:37
 ///
 
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Wordcount
{
public:
	void readfile(char *filename)
	{
		fstream fs(filename);
		string str;
		int i;
		while(fs >> str)
		{
			for(i = 0; i != vecword.size(); i++)
			{
				if(vecword[i]== str)
				{
					veccountword[i]++;
					break;
				}
			}
			if(i == vecword.size())
			{
				vecword.push_back(str);
				veccountword.push_back(1);
			}
		}
		fs.close();
	}
	void writefile(const char *filename)
	{
		ofstream ofs(filename);

		for(int i = 0; i != vecword.size(); i++)
		{
			ofs << vecword[i] << " " << veccountword[i] << endl;
		}

		ofs.close();
	}


private:
	vector<string> vecword;
	vector<int> veccountword;
};

int main()
{
	Wordcount wc;
	char rname[] = "The_Holy_Bible.txt";
	char wname[] = "coutword.txt";
	wc.readfile(rname);
	wc.writefile(wname);

	return 0;
}
			


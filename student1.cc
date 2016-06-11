 ///
 /// @file    student.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-10 22:07:47
 ///
 
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
//只能生成堆对象,不能生成栈对象
class Student
{
public:
	Student(int id,const char *name)
	:_id(id)
	{
		_name = new char[strlen(name)+1];
		strcpy(_name,name);
		cout << "init(int,char*)" << endl;
	}

	void print() const
	{
		cout << "id=" << _id << endl;
		cout << "name=" <<  _name << endl;
	}
	void destroy()
	{
		delete this;
	}
private: //把析构函数放入私有,不能生成栈对象
	~Student()
	{
		delete [] _name;
		cout << "~Student()" << endl;
	}
private:
	int _id;
	char *_name;
};

int main()
{
	Student *p = new Student(100,"mac");
	p->print();
	p->destroy();
	return 0;
}

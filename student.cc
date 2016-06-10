 ///
 /// @file    student.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-10 22:07:47
 ///
 
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
//只能生成栈对象,不能生成堆对象
class Student
{
public:
	Student(int id,const char *name)
	:_id(id)
	{
		_name = new char[strlen(name)+ 1];
		strcpy(_name,name);
		cout << "Student(int,char*)" << endl;
	}
	~Student()
	{
		delete [] _name;
		cout << "~Student()" << endl;
	}
	void print() const
	{
		cout << "id=" << _id << endl;
		cout << "name=" <<  _name << endl;
	}
private:
	void * operator new(size_t count){}
	void operator delete(void*p){}
private:
	int _id;
	char *_name;
};

int main()
{
	//Student *p = new Student(100,"mike");
	//p->print();

	//delete p;
	Student s(100,"joe");
	s.print();

	return 0;
}

 ///
 /// @file    singleton.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-10 20:55:06
 ///
#include "singleton.h" 
#include <iostream>
using namespace std;

Singleton * Singleton::_pInstance = NULL;

Singleton * Singleton::getInstance()
{
    {	
		if(_pInstance == NULL)
			_pInstance = new Singleton;
		return _pInstance;
	}
}
void Singleton::destroy() //delete不能放在析构函数里，delete类会调用析构函数,导致无线递归
{
	delete _pInstance;
}
Singleton::~Singleton()
{
	cout << "~Singleton()" << endl;
}
Singleton::Singleton()
{
	cout << "Singleton()" << endl;
}

int main()
{
	Singleton *p1 = Singleton::getInstance();
	Singleton *p2 = Singleton::getInstance();
	printf("p1=%p\n",p1);
	printf("p2=%p\n",p2);
	Singleton::destroy();删除不能在类之外,delete要和new一对使用,delete this要放在destroy里,放在析构函数里会无限递归

	return 0;
}

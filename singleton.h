 ///
 /// @file    singleton.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-10 20:55:06
 ///
#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#include <iostream>
#include <stdio.h> 
using namespace std;
//要求:内存中一个类只能产生一个对象
//1.该对象不能是栈对象,全局对象
//2.将构造函数放入private区域
//3.在public区域提供一个静态成员函数
//4.提供一个static数据成员
class Singleton
{
public:
	static Singleton* getInstance();
	static void destroy();
private:
	Singleton();
	~Singleton();
	static Singleton *_pInstance;
};

#endif

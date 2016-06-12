 ///
 /// @file    mutexclass.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-12 21:07:36
 ///
 
#include <iostream>
#include <pthread.h>
using namespace std;

class Mutexlock
{
public:
	Mutexlock()
	{
		pthread_mutex_init(&_mutex,NULL);
	}
	~Mutexlock()
	{
		pthread_mutex_destroy(&_mutex);
	}
	void lock()
	{
		pthread_mutex_lock(&_mutex);
	}
	void unlock()
	{
		pthread_mutex_unlock(&_mutex);
	}
private:
	Mutexlock(const Mutexlock &rhs);
	Mutexlock &operator = (const Mutexlock &rhs);
private:
	pthread_mutex_t _mutex;
};

int main()
{
	Mutexlock mutex;
	mutex.lock();
	cout << "doing something" << endl;
	mutex.unlock();

	return 0;
}

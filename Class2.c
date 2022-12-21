#include <iostream>
#include <Class1.h>
#include <Class2.h>

using namespace std;

CLASS2::CLASS2()
{
	cout << "CLASS2构造函数执行" << endl;
}

//析构
CLASS2::~CLASS2()
{
	cout << "CLASS2析构函数执行" << endl;
}

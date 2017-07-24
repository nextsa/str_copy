#ifndef MString_HEADER //для включения .h файла только один раз
#define MString_HEADER

#include <iostream>

using namespace std;

class MyString
{
public:
	MyString(const char* pName);
	~MyString();
	MyString (const MyString& ms);

	MyString& operator=(MyString& ms);

private:
	char* m_pName = nullptr;
	int m_len = 0;

	friend ostream& operator<<(ostream& os, const MyString& ms);
};

ostream& operator<<(ostream& os, const MyString& ms);
#endif

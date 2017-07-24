#include "MyString.h"
#include <cstring>

ostream& operator<<(ostream& os, const MyString& ms)
{
	return os<<"My String: "<<ms.m_pName<<endl;
}

MyString::MyString(const char* pName)
{
	m_len = strlen(pName);
	m_pName = new char [m_len + 1];	

	strncpy(m_pName, pName,  m_len);
}

MyString::MyString (const MyString& ms)
{
	m_len = ms.m_len;
	m_pName = new char [m_len + 1];	

	strncpy(m_pName, ms.m_pName,  m_len);
}

MyString& MyString::operator=(MyString& ms)
{
	m_len = ms.m_len;
	m_pName = new char [m_len + 1];	

	strncpy(m_pName, ms.m_pName,  m_len);

	return *this;
}

MyString::~MyString()
{
	delete[] m_pName;
}

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const char* pName = "Вася";
	const int len = strlen(pName);	

	char* pCopy = new char [len + 1];
	strncpy(pCopy, pName, len);
	pCopy[len] = 0;

	cout<<pCopy<<endl;
	
	delete[] pCopy;
}


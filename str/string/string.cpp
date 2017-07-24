#include "MyString.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	MyString s1("one");

	MyString s2(s1);


	MyString s3 = s1;
	
	cout<<"s1 "<<s1<<"s2 "<<s2<<"s3 "<<s3<<endl;


//	MyString s4;
//	MyString s5('*', 10);

//	cout<<"s4 "<<s4<<"; "<<"s5"<<s5<<endl;
}

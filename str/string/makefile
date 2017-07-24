a.out: string.o MyString.o
	g++ string.o MyString.o

string.o: st.cpp MyString.o
    g++ -o string.o string.cpp

MyString.o: MyString.cpp MyString.h
    g++ -c MyString.cpp -o MyString.o

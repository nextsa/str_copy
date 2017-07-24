all: st

st: st.o MyString.o
    g++ -o st st.o MyString.o

st.o: st.cpp MyString.h
    g++ -o st.o st.cpp

MyString.o: MyString.cpp MyString.h
    g++ -o MyString.o MyString.cpp

#pragma once
using namespace ::System;
ref class Student
{
public:
	Student(void);
	~Student();
	double  FinalMark;
	int StudentID;
	String ^ Name;
	array< int^,1 >  ^ Watchlist;
	bool IsCompleted;	
};

ref class DersiresList
{
public:
	DersiresList(void);
	~DersiresList();
	int StudentID;
	DersiresList ^ Next;
	
};

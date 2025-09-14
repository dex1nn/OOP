#include <iostream>

using namespace std;

struct date
{
	int day;
	int mounth;
	int year;
};

class Student 
{
	char* name;
	char* last_name;
	char* telephone_number;
	date birthday;

public:
	void set_name(char*);
	void set_lastname(char*);
	void set_telephone_number(char*);
	void set_birthday();
	
};

void Student::set_name(char* n)
{
	if (name) { delete[]name; }
	name = new char[strlen(n)];
	strcpy_s(name, strlen(n), n);
}

void Student::set_lastname(char* ln)
{
	if (last_name) { delete[]last_name; }
	last_name = new char[strlen(ln)];
	strcpy_s(last_name, strlen(ln), ln);
}

void Student::set_telephone_number(char* tel_n)
{
	if (telephone_number) { delete[]telephone_number; }
	telephone_number = new char[strlen(tel_n)];
	strcpy_s(telephone_number, strlen(tel_n), tel_n);
}

void Student::set_birthday(int d, int m, int y)
{
	birthday.day = d;
	birthday.mounth = m;
	birthday.year = y;
}

int main()
{
	Student s1;

	s1.set_name((char*)"vasia");
	s1.set_lastname((char*)"bubkin");
	s1.set_telephone_number((char*)"066 1234 1212");
}


#pragma once
#include <iostream>
#include <cstring>

using namespace std;


struct date
{
	int day;
	int mounth;
	int year;
};

struct city_d_country
{
	char* city;
	char* country;
};

class Student
{
private:
	char* name;
	char* last_name;
	char* telephone_number;
	date birthday;
	city_d_country city_d_country_student;
	char* educational_institution;
	city_d_country city_d_country_educational_institution;

public:

	~Student()
	{
		delete[] name;
		delete[] last_name;
		delete[] telephone_number;
		delete[] city_d_country_student.city;
		delete[] city_d_country_student.country;
		delete[] educational_institution;
		delete[] city_d_country_educational_institution.city;
		delete[] city_d_country_educational_institution.country;
	}

	void set_name(char*);
	void set_lastname(char*);
	void set_telephone_number(char*);
	void set_birthday(int d, int m, int y);
	void set_student_city_d_country(char*, char*);
	void set_educational_institution(char*);
	void set_educational_institution_city_d_country(char*, char*);

	void get_name();
	void get_lastname();
	void get_telephone_number();
	void get_birthday();
	void get_student_city_d_country();
	void get_educational_institution();
	void get_educational_institution_city_d_country();
};



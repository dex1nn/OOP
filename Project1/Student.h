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
		if (name)
		delete[] name;
		if (last_name)
		delete[] last_name;
		if (telephone_number)
		delete[] telephone_number;
		if (city_d_country_student.city)
		delete[] city_d_country_student.city;
		if (city_d_country_student.country)
		delete[] city_d_country_student.country;
		if (educational_institution)
		delete[] educational_institution;
		if (city_d_country_educational_institution.city)
		delete[] city_d_country_educational_institution.city;
		if (city_d_country_educational_institution.country)
		delete[] city_d_country_educational_institution.country;
	}

	Student(int d, int m, int y, const char* n, const char* ln, const char* tel_n, const char* city, const char* country, const char* inst_name, const char* inst_city, const char* inst_country);
	Student();
	Student(char* name) : Student{ 1, 1, 2000, name, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr }
	{
		if (name) set_name(const_cast<char*>(name));
	}
	Student(Student&& object)
		:name{ object.name }
	{
		object.name = nullptr;
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



#include <iostream>

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
	char* name;
	char* last_name;
	char* telephone_number;
	date birthday;
	city_d_country city_d_country_student;
	char* educational_institution;
	city_d_country city_d_country_educational_institution;

public:
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


int main()
{
	Student s1;

	s1.set_name((char*)"vasia");
	s1.set_lastname((char*)"bubkin");
	s1.set_telephone_number((char*)"066 1234 1212");
	s1.set_birthday(9, 9, 2000);
	s1.set_student_city_d_country((char*)"Kyiv", (char*)"Ukraina");
	s1.set_educational_institution((char*)"ItStep");
	s1.set_educational_institution_city_d_country((char*)"Krivoy Rog", (char*)"Ukraina");

	s1.get_name();
	s1.get_lastname();
	s1.get_birthday();
	s1.get_telephone_number();
	s1.get_student_city_d_country();
	s1.get_educational_institution();
	s1.get_educational_institution_city_d_country();
}

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

void Student::set_student_city_d_country(char* city, char* country)
{
	if (city_d_country_student.city) { delete[]city_d_country_student.city; }
	city_d_country_student.city = new char[strlen(city)];
	strcpy_s(city_d_country_student.city, strlen(city), city);

	if (city_d_country_student.country) { delete[]city_d_country_student.country; }
	city_d_country_student.country = new char[strlen(country)];
	strcpy_s(city_d_country_student.country, strlen(country), country);
}

void Student::set_educational_institution(char* name) 
{
	if (educational_institution) { delete[]educational_institution; }
	educational_institution = new char[strlen(name)];
	strcpy_s(educational_institution, strlen(name), name);
}

void Student::set_educational_institution_city_d_country(char* city, char* country)
{
	if (city_d_country_educational_institution.city) { delete[]city_d_country_educational_institution.city; }
	city_d_country_educational_institution.city = new char[strlen(city)];
	strcpy_s(city_d_country_educational_institution.city, strlen(city), city);

	if (city_d_country_educational_institution.country) { delete[]city_d_country_educational_institution.country; }
	city_d_country_educational_institution.country = new char[strlen(country)];
	strcpy_s(city_d_country_educational_institution.country, strlen(country), country);
}

void Student::get_name()
{
	cout << "Name: " << name << endl;
}

void Student::get_lastname()
{
	cout << "Last Name: " << last_name << endl;
}

void Student::get_telephone_number()
{
	cout << "Telephone Number: " << telephone_number << endl;
}

void Student::get_birthday()
{
	cout << "Date of Birth: " << birthday.day << "." << birthday.mounth << "." << birthday.year << endl;
}

void Student::get_student_city_d_country()
{
	cout << "Student's Location: " << city_d_country_student.city << ", " << city_d_country_student.country << endl;
}

void Student::get_educational_institution()
{
	cout << "Educational Institution: " << educational_institution << endl;
}

void Student::get_educational_institution_city_d_country()
{
	cout << "Institution's Location: " << city_d_country_educational_institution.city << ", " << city_d_country_educational_institution.country << endl;
}
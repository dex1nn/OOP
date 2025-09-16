#include "Student.h"

void Student::set_name(char* n)
{
	if (name) { delete[] name; }
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void Student::set_lastname(char* ln)
{
	if (last_name) { delete[] last_name; }
	last_name = new char[strlen(ln) + 1];
	strcpy_s(last_name, strlen(ln) + 1, ln);
}

void Student::set_telephone_number(char* tel_n)
{
	if (telephone_number) { delete[] telephone_number; }
	telephone_number = new char[strlen(tel_n) + 1];
	strcpy_s(telephone_number, strlen(tel_n) + 1, tel_n);
}

void Student::set_birthday(int d, int m, int y)
{
	birthday.day = d;
	birthday.mounth = m;
	birthday.year = y;
}

void Student::set_student_city_d_country(char* city, char* country)
{
	if (city_d_country_student.city) { delete[] city_d_country_student.city; }
	city_d_country_student.city = new char[strlen(city) + 1];
	strcpy_s(city_d_country_student.city, strlen(city) + 1, city);

	if (city_d_country_student.country) { delete[] city_d_country_student.country; }
	city_d_country_student.country = new char[strlen(country) + 1];
	strcpy_s(city_d_country_student.country, strlen(country) + 1, country);
}

void Student::set_educational_institution(char* name)
{
	if (educational_institution) { delete[] educational_institution; }
	educational_institution = new char[strlen(name) + 1];
	strcpy_s(educational_institution, strlen(name) + 1, name);
}

void Student::set_educational_institution_city_d_country(char* city, char* country)
{
	if (city_d_country_educational_institution.city) { delete[] city_d_country_educational_institution.city; }
	city_d_country_educational_institution.city = new char[strlen(city) + 1];
	strcpy_s(city_d_country_educational_institution.city, strlen(city) + 1, city);

	if (city_d_country_educational_institution.country) { delete[] city_d_country_educational_institution.country; }
	city_d_country_educational_institution.country = new char[strlen(country) + 1];
	strcpy_s(city_d_country_educational_institution.country, strlen(country) + 1, country);
}

void Student::get_name()
{
	if (name) {
		cout << "Name: " << name << endl;
	}
}

void Student::get_lastname()
{
	if (last_name) {
		cout << "Last Name: " << last_name << endl;
	}
}

void Student::get_telephone_number()
{
	if (telephone_number) {
		cout << "Telephone Number: " << telephone_number << endl;
	}
}

void Student::get_birthday()
{
	cout << "Date of Birth: " << birthday.day << "." << birthday.mounth << "." << birthday.year << endl;
}

void Student::get_student_city_d_country()
{
	if (city_d_country_student.city && city_d_country_student.country) {
		cout << "Student's Location: " << city_d_country_student.city << ", " << city_d_country_student.country << endl;
	}
}

void Student::get_educational_institution()
{
	if (educational_institution) {
		cout << "Educational Institution: " << educational_institution << endl;
	}
}

void Student::get_educational_institution_city_d_country()
{
	if (city_d_country_educational_institution.city && city_d_country_educational_institution.country) {
		cout << "Institution's Location: " << city_d_country_educational_institution.city << ", " << city_d_country_educational_institution.country << endl;
	}
}
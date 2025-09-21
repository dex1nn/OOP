#include "Student.h"

Student::Student(int d, int m, int y, const char* n, const char* ln, const char* tel_n, const char* city, const char* country, const char* inst_name, const char* inst_city, const char* inst_country)
	: birthday{ d, m, y },
	name(nullptr),
	last_name(nullptr),
	telephone_number(nullptr),
	educational_institution(nullptr),
	city_d_country_student{ nullptr, nullptr },
	city_d_country_educational_institution{ nullptr, nullptr }
{
	if (n) set_name(const_cast<char*>(n));
	if (ln) set_lastname(const_cast<char*>(ln));
	if (tel_n) set_telephone_number(const_cast<char*>(tel_n));
	if (city && country) set_student_city_d_country(const_cast<char*>(city), const_cast<char*>(country));
	if (inst_name) set_educational_institution(const_cast<char*>(inst_name));
	if (inst_city && inst_country) set_educational_institution_city_d_country(const_cast<char*>(inst_city), const_cast<char*>(inst_country));

}

Student::Student() : Student(1, 1, 2000, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr) {}

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

void Student::set_educational_institution(char* inst_name)
{
	if (educational_institution) { delete[] educational_institution; }
	educational_institution = new char[strlen(inst_name) + 1];
	strcpy_s(educational_institution, strlen(inst_name) + 1, inst_name);
}

void Student::set_educational_institution_city_d_country(char* inst_city, char* inst_country)
{
	if (city_d_country_educational_institution.city) { delete[] city_d_country_educational_institution.city; }
	city_d_country_educational_institution.city = new char[strlen(inst_city) + 1];
	strcpy_s(city_d_country_educational_institution.city, strlen(inst_city) + 1, inst_city);

	if (city_d_country_educational_institution.country) { delete[] city_d_country_educational_institution.country; }
	city_d_country_educational_institution.country = new char[strlen(inst_country) + 1];
	strcpy_s(city_d_country_educational_institution.country, strlen(inst_country) + 1, inst_country);
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
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

	Student(int d, int m, int y, const char* n, const char* ln, const char* tel_n, const char* city, const char* country, const char* inst_name, const char* inst_city, const char* inst_country)
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

	Student() : Student(1, 1, 2000, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr) {}

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

class Aspirant : public Student {
	char* topic_candidat_work;
public:
	~Aspirant() {
		delete[] topic_candidat_work;
	}
	Aspirant(int d, int m, int y, const char* n, const char* ln, const char* tel_n, const char* city, const char* country, const char* inst_name, const char* inst_city, const char* inst_country, const char* topic_cW) :Student{ d, m, y, n, ln, tel_n, city, country, inst_name, inst_city, inst_country }{
		if (topic_cW) set_topic_CW(const_cast<char*>(topic_cW));
	};

	void get_topic_CW() {
		cout << "Topic of the candidat`s work: " << topic_candidat_work << endl;
	}
	void set_topic_CW(char* topic_CW) {
		if (topic_candidat_work) { delete[] topic_candidat_work; }
		topic_candidat_work = new char[strlen(topic_CW) + 1];
		strcpy_s(topic_candidat_work, strlen(topic_CW) + 1, topic_CW);
	}
};

int main()
{
	//Student s1;
	
	//Student s1{ 9, 9, 2000, "name", "last name", "066 1234 1234", "qwe", "asd", "Itstep", "asd", "zxc" };

	Aspirant A1{ 9, 9, 2000, "name", "last name", "066 1234 1234", "qwe", "asd", "Itstep", "asd", "zxc", "CPP-inherite" };

	A1.get_name();
	A1.get_lastname();
	A1.get_birthday();
	A1.get_telephone_number();
	A1.get_student_city_d_country();
	A1.get_educational_institution();
	A1.get_educational_institution_city_d_country();
	A1.get_topic_CW();
	
	/*
	s1.set_name((char*)"vasia");
	s1.set_lastname((char*)"bubkin");
	s1.set_telephone_number((char*)"066 1234 1212");
	s1.set_birthday(9, 9, 2000);
	s1.set_student_city_d_country((char*)"Kyiv", (char*)"Ukraina");
	s1.set_educational_institution((char*)"ItStep");
	s1.set_educational_institution_city_d_country((char*)"Krivoy Rog", (char*)"Ukraina");
	*/

	/*
	s1.get_name();
	s1.get_lastname();
	s1.get_birthday();
	s1.get_telephone_number();
	s1.get_student_city_d_country();
	s1.get_educational_institution();
	s1.get_educational_institution_city_d_country();
	*/
}

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

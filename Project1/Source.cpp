#include <iostream>
#include <cstring>
#include "Student.h"


int main()
{
	Student s1{ 9, 9, 2000,"name","last name", "066 1234 1234", "qwe", "asd", "Itstep", "asd", "zxc" };

	s1.set_name((char*)"vasia");
	s1.set_lastname((char*)"bubkin");
	s1.set_telephone_number((char*)"066 1234 1212");
	
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

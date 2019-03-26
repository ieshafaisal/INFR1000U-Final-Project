#include <iostream>
#include <string>
#include <vector>
#include "STUDENT.h"
#include "FACULTY.h"
#include "COURSE.h"


int main()
{
	struct Student s1 = { "Zack Smith", 773456 , "135 Mooncreek Ave, Oshawa", "5-May-1998" , "Science" , "zacksmith78@gmail.com" };
	struct Student s2 = { "William Jones", 773457 , "18 Oshawa Rd, Oshawa", "8-August-1997" , "Business" , "williamjones91@gmail.com" };
	struct Student s3 = { "Ross Morgan", 773458 , "156 Mooncreek Ave, Oshawa", "19-November-1998" , "Business" , "rossmorgan@gmail.com" };
	struct Student s4 = { "Zhang Wo", 773459 , "14 Riverside Rd, Oshawa", "14-September-1999" , "Science" , "zhangwo99@gmail.com" };
	struct Student s5 = { "Nancy Cooper", 773460 , "2336 Newside Rd, Oshawa", "10-May-2000" , "Information Technology" , "nancycooper2000@gmail.com" }; 
	
	char n, k, ws;
	unsigned int x = 0;
	std::vector<Student>students;
	std::vector<Faculty>faculty;

		std::cout << "Welcome to the Staff Module of the Student Registration System (SRS). \n";
LOOP:	std::cout << "Please select one of the following options by entering the number associated with the menu option: \n"
			<< "1. Add a course\n"
			<< "2. Course Information Retrieval\n"
			<< "3. Student Information\n"
			<< "4. Course List\n"
			<< "5. Student-Course Report\n"
			<< "Enter the menu option: ";
		std::cin >> n;

	switch ('n')
	{
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	default:
		std::cout << "Invalid input. ";
		goto LOOP;
	}

	system("pause");
	return 0;
}

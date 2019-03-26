#include <iostream>
#include <string>
#include <vector>
#include "STUDENT.h"
#include "FACULTY.h"
#include "COURSE.h"


int main()
{
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
		std::cout << "Invalid input.1 ";
		goto LOOP;
	}

	system("pause");
	return 0;
}

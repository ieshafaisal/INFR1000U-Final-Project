#ifndef COURSE
#define COURSE
#include <string>

class Course
{
public:
	Course(); // Default constructor - no input parameters
	void setTitle(std::string newCourse);
	void setNumber(std::string newNumber);
	void setCapcity(int newCapacity);
	void setSection(int newSection);
	void setSemester(int newSemester);
	void setDepartment(std::string newDepartment);

private:
	std::string title;
	std::string number;
	int capacity;
	int section;
	std::string semester;
	std::string department;


};

#endif // !COURSE

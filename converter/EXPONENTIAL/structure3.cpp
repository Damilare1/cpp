#include <iostream>
#include <cstring>

using namespace std;
void printcourse(struct LVLFIRSTSEMESTER course);

int i,j;
struct LVLFIRSTSEMESTER
{
	char CourseTitle[100];
	char CourseCode[100];
	char CourseLecturer[100];
	int CourseUnit;
};

int main()
{
	struct LVLFIRSTSEMESTER course1,course2,course3,course4,course5;

	
	
	//Course specification
	strcpy(course1.CourseTitle, "Understanding English");
	strcpy(course1.CourseCode, "GES101");
	strcpy(course1.CourseLecturer, "Mrs Ajayi");
	course1.CourseUnit = 3;
	
	strcpy(course2.CourseTitle, "Eletrical course");
	strcpy(course2.CourseCode, "TEL231");
	strcpy(course2.CourseLecturer, "Mr Odeyemi");
	course2.CourseUnit = 4;
	
	strcpy(course3.CourseTitle, "Basic Computer Programming");
	strcpy(course3.CourseCode, "TME211");
	strcpy(course3.CourseLecturer, "Engineer Adebayo");
	course3.CourseUnit = 3;
	
	strcpy(course4.CourseTitle, "Ordinary Differential Equations");
	strcpy(course4.CourseCode, "MAT241");
	strcpy(course4.CourseLecturer, "Different Lecturers");
	course4.CourseUnit = 4;
	
	strcpy(course5.CourseTitle, " Autocad");
	strcpy(course5.CourseCode, "Tme221");
	strcpy(course5.CourseLecturer, "Engineer Nosa");
	course5.CourseUnit = 2;


	printcourse(course1);
	cout << endl;
	printcourse(course2);
	cout << endl;
	printcourse(course3);
	cout << endl;
	printcourse(course4);
	cout << endl;
	printcourse(course5);
}

void printcourse(struct LVLFIRSTSEMESTER course) {
	cout << course.CourseCode <<endl;
	
	cout << course.CourseTitle << endl;
	
	cout << course.CourseLecturer << endl;
		
	cout << course.CourseUnit << endl;
}

#include <iostream>
#include <cstring>

using namespace std;
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
	struct LVLFIRSTSEMESTER course1;
	struct LVLFIRSTSEMESTER course2;
	struct LVLFIRSTSEMESTER course3;
	struct LVLFIRSTSEMESTER course4;
	struct LVLFIRSTSEMESTER course5;
	
	
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


	cout << course1.CourseTitle<< " Details"<<endl;
	cout << "Course Code: " << course1.CourseCode<<endl;
	cout << "Course Lecturer: " << course1.CourseLecturer<<endl;
	cout << "Course Unit: " << course1.CourseUnit<<endl;
	cout << endl;
	
	cout << course2.CourseTitle<< " Details"<<endl;
	cout << "Course Code: " << course2.CourseCode<<endl;
	cout << "Course Lecturer: " << course2.CourseLecturer<<endl;
	cout << "Course Unit: " << course2.CourseUnit<<endl;
	cout << endl;
	 
	cout << course3.CourseTitle<< " Details"<<endl;
	cout << "Course Code: " << course3.CourseCode<<endl;
	cout << "Course Lecturer: " << course3.CourseLecturer<<endl;
	cout << "Course Unit: " << course3.CourseUnit<<endl;
	cout << endl;
	
	cout << course4.CourseTitle<< " Details"<<endl;
	cout << "Course Code: " << course4.CourseCode<<endl;
	cout << "Course Lecturer: " << course4.CourseLecturer<<endl;
	cout << "Course Unit: " << course4.CourseUnit<<endl;
	cout << endl;
	
	cout << course5.CourseTitle<< " Details"<<endl;
	cout << "Course Code: " << course5.CourseCode<<endl;
	cout << "Course Lecturer: " << course5.CourseLecturer<<endl;
	cout << "Course Unit: " << course5.CourseUnit<<endl;


}


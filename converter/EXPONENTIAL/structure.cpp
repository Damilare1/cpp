#include <iostream>
#include <cstring>

using namespace std;

struct LVLFIRSTSEMESTER
{
	char CourseTitle[];
	char CourseCode[];
	char CourseLecturer[];
	int CourseUnit[];
};

int main()
{
	struct LVLFIRSTSEMESTER course[1];
	struct LVLFIRSTSEMESTER course[2];
	struct LVLFIRSTSEMESTER course[3];
	struct LVLFIRSTSEMESTER course[4];
	struct LVLFIRSTSEMESTER course[5];
	
	//Course specification
	strcpy(course[1].CourseTitle, "Understanding English");
	strcpy(course[1].CourseCode, "GES101");
	strcpy(course[1].CourseLecturer, "Mrs Ajayi");
	course[1].CourseUnit = 3;
	
	strcpy(course[2].CourseTitle, "Eletrical course");
	strcpy(course[2].CourseCode, "TEL231");
	strcpy(course[2].CourseLecturer, "Mr Odeyemi");
	course[2].CourseUnit = 4;
	
	strcpy(course[3].CourseTitle, "Basic Computer Programming");
	strcpy(course[3].CourseCode, "TME211");
	strcpy(course[3].CourseLecturer, "Engineer Adebayo");
	course[3].CourseUnit = 3;
	
	strcpy(course[4].CourseTitle, "Ordinary Differential Equations");
	strcpy(course[4].CourseCode, "MAT241");
	strcpy(course[4].CourseLecturer, "Different Lecturers");
	course[4].CourseUnit = 3;
	
	strcpy(course[5].CourseTitle, "Autocad");
	strcpy(course[5].CourseCode, "Tme221");
	strcpy(course[5].CourseLecturer, "Engineer Nosa");
	course[5].CourseUnit = 3;
	
	for(i=1, i = 5, i++)
	{
	cout << course[i].CourseTitle<< "Details"<<endl;
	cout << "Course Code" << course[i].CourseCode<<endl;
	cout << "Course Lecturer" << course[i].CourseLecturer<<endl;
	cout << "Course Unit" << course[i].CourseUnit<<endl;
}

}


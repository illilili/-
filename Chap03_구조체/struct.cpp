#include <stdio.h>
#include <string.h>

typedef int int_type;

typedef struct StudentTag {
	char name[10];
	int age;
	double gpa;
} Student;

/*struct StudentTag {
	char name[10];
	int age;
	double gpa;
}; */

int main(void) {
	/*struct StudentTag student;

	strcpy_s(student.name, "kim");
	student.age = 20;
	student.gpa = 4.3;
	*/



	Student s = { "kim", 20, 4.3 };
	printf("%s, %d, %.1f\n", s.name, s.age, s.gpa);

	Student st2 = { "Lee", 23, 4.5 };
	printf("%s, %d, %.1f\n", st2.name, st2.age, st2.gpa);

}
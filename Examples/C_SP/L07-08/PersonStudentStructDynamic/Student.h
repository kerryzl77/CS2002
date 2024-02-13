/*
 * Student.h
 *
 */

#ifndef STUDENT_H
#define STUDENT_H

// The Student struct logically extends the Person struct
typedef struct Student {
	char *name;
	int age;
	/*
	 * Note from the start of the struct
	 * up until this point, Student must
	 * be identical to Person
	 */
	char *degree; // degree subject is the only additional info recorded for students
} Student;


Student* new_Student(const char *name, int age, const char *degree);

void init_Student(Student *this, const char *degree);

void Student_setDegree(Student *this, int age);

char* Student_getDegree(Student *this);

void Student_printDetails(Student *this);

void Student_free(Student *this);




#endif /* STUDENT_H */

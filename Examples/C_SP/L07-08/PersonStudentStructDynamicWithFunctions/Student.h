/*
 * Student.h
 *
 */

#ifndef STUDENT_H
#define STUDENT_H

// The Student struct logically extends the Person struct
typedef struct Student Student;
struct Student {
	char *name;
	int age;
	void (*super_printDetails)(void *);
	void (*super_free)(void *);
	void (*super_free_attributes)(void *);
	/*
	 * Note from the start of the struct
	 * up until this point, Student must
	 * be identical to Person, except we
	 * rename super type function pointers
	 */
	char *degree; // degree subject is the only additional info recorded for students
	void (*printDetails)(Student *);
	void (*free)(Student *);
	void (*free_attributes)(Student *);
};


Student* new_Student(const char *name, int age, const char *degree);

void init_Student(Student *this, const char *name, int age, const char *degree);

#endif /* STUDENT_H */

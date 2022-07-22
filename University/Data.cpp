#include "Header.h"


void addGroup(vector<Group>& groups) {
	int countLessons = 4;
	Lesson* lessons = new Lesson[countLessons];
	vector<Student> students;
	//Lessons
	lessons[0].setName("History");
	lessons[1].setName("Algebra");
	lessons[2].setName("Physics");
	lessons[3].setName("Computer Science");
	addStudent(students);
	//0
	Group group0;
	Group group1;
	group0.setName("PH_452.14");
	group0.setStudent(students[0]);
	group0.setStudent(students[1]);
	group0.setStudent(students[2]);
	group0.setLesson(lessons[0]);
	group0.setLesson(lessons[1]);
	//1
	group1.setName("CS_327.15");
	group1.setStudent(students[3]);
	group1.setStudent(students[4]);
	group1.setStudent(students[5]);
	group1.setLesson(lessons[2]);
	group1.setLesson(lessons[3]);
	groups.push_back(group0);
	groups.push_back(group1);
}
void addStudent(vector<Student>& students) {
	int countLessons = 4;
	Lesson* lessons = new Lesson[countLessons];
	//Lessons
	lessons[0].setName("History");
	lessons[1].setName("Algebra");
	lessons[2].setName("Physics");
	lessons[3].setName("Computer Science");
	Student student0;
	Student student1;
	Student student2;
	Student student3;
	Student student4;
	Student student5;
	//Students - 0
	student0.setAge(19);
	student0.setName("Jhon");
	student0.setSurname("Doe");
	student0.setSpecialty("Philosophy");
	student0.setScholar(100);
	student0.setExam(Exam(lessons[0], 10));
	student0.setExam(Exam(lessons[1], 11));
	student0.setCard(BankCard(2342, 400, 10, 2024));
	//1
	student1.setAge(20);
	student1.setName("Morty");
	student1.setSurname("Smith");
	student1.setSpecialty("Philosophy");
	student1.setScholar(120);
	student1.setExam(Exam(lessons[0], 7));
	student1.setExam(Exam(lessons[1], 9));
	student1.setCard(BankCard(1928, 320, 10, 2024));
	//2
	student2.setAge(18);
	student2.setName("Sam");
	student2.setSurname("Biden");
	student2.setSpecialty("Philosophy");
	student2.setScholar(120);
	student2.setExam(Exam(lessons[0], 12));
	student2.setExam(Exam(lessons[1], 10));
	student2.setCard(BankCard(9457, 700, 10, 2024));
	//3
	student3.setAge(23);
	student3.setName("Tyler");
	student3.setSurname("Thomason");
	student3.setSpecialty("IT");
	student3.setScholar(150);
	student3.setExam(Exam(lessons[2], 11));
	student3.setExam(Exam(lessons[3], 11));
	student3.setCard(BankCard(7785, 1300, 12, 2022));
	//4
	student4.setAge(22);
	student4.setName("Jhon");
	student4.setSurname("Snow");
	student4.setSpecialty("IT");
	student4.setScholar(150);
	student4.setExam(Exam(lessons[2], 10));
	student4.setExam(Exam(lessons[3], 12));
	student4.setCard(BankCard(4733, 200, 12, 2022));
	//5
	student5.setAge(19);
	student5.setName("Murad");
	student5.setSurname("Seyidov");
	student5.setSpecialty("IT");
	student5.setScholar(220);
	student5.setExam(Exam(lessons[2], 12));
	student5.setExam(Exam(lessons[3], 12));
	student5.setCard(BankCard(3154, 2700, 12, 2025));
	students.push_back(student0);
	students.push_back(student1);
	students.push_back(student2);
	students.push_back(student3);
	students.push_back(student4);
	students.push_back(student5);
}
void addTeacher(vector<Teacher>& teachers) {
	vector<Group> groups;
	addGroup(groups);
	Teacher teacher0;
	Teacher teacher1;
	teacher0.setAge(30);
	teacher0.setName("Timothy");
	teacher0.setSurname("Kenny");
	teacher0.setGroup(groups[0]);
	teacher0.setGroup(groups[1]);
	teacher0.setCard(BankCard(1298, 2000, 11, 2023));
	teacher0.setDepartment("Computer Science");
	teacher0.setSalary(700);
	//
	teacher1.setAge(43);
	teacher1.setName("Cheri");
	teacher1.setSurname("Becker");
	teacher1.setGroup(groups[0]);
	teacher1.setGroup(groups[1]);
	teacher1.setCard(BankCard(6545, 1600, 11, 2023));
	teacher1.setDepartment("Computer Science");
	teacher1.setSalary(563);
	teachers.push_back(teacher0);
	teachers.push_back(teacher1);
}
void addData(University& uni) {
	vector<Student> students;
	vector<Teacher> teachers;
	addTeacher(teachers);
	addStudent(students);
	uni.setName("Oxford");
	for (auto student : students) {
		uni.setStudent(student);
	}
	for (auto teacher : teachers) {
		uni.setTeacher(teacher);
	}
}
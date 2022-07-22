#include "Header.h"


//University
void University::setName(const string& name) { _name = name; }
void University::setStudent(const Student& student) { _students.push_back(student); }
void University::setTeacher(const Teacher& teacher) { _teachers.push_back(teacher); }
string University::getName()const { return _name; }
const vector<Student>& University::getStudent()const { return _students; }
const vector<Teacher>& University::getTeacher()const { return _teachers; }
int University::getUniversityScore() {
	int score = 0;
	int count = 0;
	for (auto student : _students) {
		score += student.getScore();
		count++;
	}
	return score / count;
}
void University::showAllStudents() {
	vector<Exam> exams;
	for (auto student : _students) {
		cout << "-----------------------------\n";
		cout << "Name: " << student.getName() << endl;
		cout << "Surname: " << student.getSurname() << endl;
		cout << "Age: " << student.getAge() << endl;
		cout << "Specialty: " << student.getSpecialty() << endl;
		cout << "Score: " << student.getScore() << endl;
		cout << "Scholar: " << student.getScholar() << endl;
		cout << "Exams: \n";
		exams = student.getExam();
		for (auto exam : exams) {
			cout << "Lessons: " << exam.getLesson().getName() << endl;
			cout << "Point: " << exam.getPoint() << endl;
		}
	}
}
void University::getPayment() {
	cout << "Teachers: \n\n" << endl;
	for (auto teacher : _teachers) {
		cout << "Full name: " << teacher.getName() << " " << teacher.getSurname() << endl;
		cout << "Salary: " << teacher.getSalary() << endl;
		cout << "-----------------------------\n";
	}
	cout << "\n\n\nStudents: \n\n" << endl;
	for (auto student : _students) {
		cout << "Full name: " << student.getName() << " " << student.getSurname() << endl;
		cout << "Scholar: " << student.getScholar() << endl;
		cout << "-----------------------------\n";
	}
}
void University::showAllTeacher() {
	vector<Group> groups;
	for (auto teacher : _teachers) {
		cout << "-----------------------------\n";
		cout << "Name: " << teacher.getName() << endl;
		cout << "Surname: " << teacher.getSurname() << endl;
		cout << "Age: " << teacher.getAge() << endl;
		cout << "Department: " << teacher.getDepartment() << endl;
		cout << "Salary: " << teacher.getSalary() << endl;
		cout << "Groups: " << endl;
		groups = teacher.getGroup();
		for (auto group : groups) {
			cout << group.getName() << endl;
		}
	}
}
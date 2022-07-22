#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <vector>


#define Green 2
#define White 7
using namespace std;

class Lesson {
	string _name;
public:
	void setName(const string&);
	string getName()const;
	Lesson();
};

class Exam {
	Lesson _lesson;
	int _point;
public:
	void setLesson(const Lesson&);
	void setPoint(const int);
	int getPoint()const;
	const Lesson& getLesson()const;
	Exam(Lesson&, int);
};

class BankCard {
	int _password;
	int _balance;
	int _expired_month;
	int _expired_year;
public:
	BankCard(int, int, int, int);
	BankCard();
	void setBalance(const int);
	int getPassword()const;
	int getBalance()const;
	int getExMonth()const;
	int getExYear()const;
};


class Person {
protected:
	string _name;
	string _surname;
	int _age;
	BankCard _card;
public:
	void setName(const string&);
	void setSurname(const string&);
	virtual void setAge(const int);
	void setCard(const BankCard&);
	string getName()const;
	string getSurname()const;
	int getAge()const;
	const BankCard& getCard()const;
	Person();
};

class Student : public Person {
	string _specialty;
	int _score;
	int _scholar;
	vector<Exam> _exams;
public:
	void setSpecialty(const string&);
	void setExam(const Exam&);
	void setAge(const int)override;
	void setScholar(const int);
	string getSpecialty()const;
	int getScore();
	int getScholar()const;
	const vector<Exam>& getExam()const;
	Student();
};

class Group {
	string _name;
	vector<Student> _students;
	vector<Lesson> _lessons;
public:
	void setName(const string&);
	void setStudent(const Student&);
	void setLesson(const Lesson&);
	string getName()const;
	const vector<Student>& getStudents()const;
	const vector<Lesson>& getLessons()const;
};

class Teacher : public Person {
	int _salary;
	string _department;
	vector<Group> _groups;
public:
	void setSalary(const int);
	void setAge(const int)override;
	void setDepartment(const string&);
	void setGroup(const Group&);
	int getSalary()const;
	string getDepartment()const;
	const vector<Group>& getGroup()const;
};


class University {
	string _name;
	vector<Student> _students;
	vector<Teacher> _teachers;
public:
	void setName(const string&);
	void setStudent(const Student&);
	void setTeacher(const Teacher&);
	string getName()const;
	const vector<Student>& getStudent()const;
	const vector<Teacher>& getTeacher()const;
	int getUniversityScore();
	void showAllStudents();
	void getPayment();
	void showAllTeacher();
};


void addGroup(vector<Group>&);
void addStudent(vector<Student>&);
void addTeacher(vector<Teacher>&);
void addData(University&);
int choosenLine(string*, int);
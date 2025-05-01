#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Constructor
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Function to display person details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
public:
    string course;

    // Constructor
    Student(string name, int age, string course) : Person(name, age) {
        this->course = course;
    }

    // Function to display student details
    void display() {
        Person::display(); // Display base class details
        cout << "Course: " << course << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
public:
    string subject;

    // Constructor
    Teacher(string name, int age, string subject) : Person(name, age) {
        this->subject = subject;
    }

    // Function to display teacher details
    void display() {
        Person::display(); // Display base class details
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create objects of Student and Teacher
    Student student("Alice", 20, "Computer Science");
    Teacher teacher("Mr. Smith", 40, "Mathematics");

    // Display details
    cout << "Student Details:" << "\n";
    cout << "-----------------"<< "\n";
    student.display();
	
    cout << "\nTeacher Details:" << "\n";
    cout << "-----------------"<< "\n";
    teacher.display();

    return 0;
}


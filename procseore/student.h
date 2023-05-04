#ifndef PROCSEORE_STUDENT_H
#define PROCSEORE_STUDENT_H
#include <string>
#include <vector>
#include <iostream>
class Student;
std::ostream& print(std::ostream& out, const std::vector<Student>& students);

class Student {
friend std::ostream& operator<<(std::ostream& out, const Student& s);
friend void rank(std::vector<Student>& students);
private:
    std::string name_;
    int kor_;
    int eng_;
    int mat_;
    int sum_;
    double average_;
    int rank_;
public:
    Student();
    Student(std::istream);
    bool operator<(const Student& rhs) const;
    bool operator>(const Student& rhs) const;
    std::istream& read(std::istream&);
    void sum();
    void average();
    void rank();

};
#endif

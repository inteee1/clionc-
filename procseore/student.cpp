#include <iostream>
#include <vector>
#include <iomanip>
#include "student.h"

using namespace std;

void rank(vector<Student>& students)
{
    for (auto it = students)

    for(auto it = students.begin(); it != students.end(); ++it )
    {
        for (auto it2 = students.begin(); it2 != students.end(); ++it2) {
            if (it->sum_ > it2->sum_) {
                ++it->rank_;
            }
        }
    }
}

ostream& printf(ostream out, const vector<Student>& students)
{
   out << "---------------------------------------------------------------------------" << endl;
   out << "   name              kor eng mat sum   avg  rnk"<< endl;
   out << "---------------------------------------------------------------------------" << endl;
   for (vector<Student>::const_iterator it = students.cbegin(); it != students.cend(); ++it) {

        out << *it <<endl;
    }
    out << "---------------------------------------------------------------------------" << endl;
    return out;
}
ostream& operator<<(ostream& out, const Student& s)
{
    out << setw(20) << s.name_;
        out << setw(4) << s.kor_ <<setw(4) << s.eng_;
        out << setw(4) << s.mat_ <<setw(4) << s.sum_;
        out << setw(7)  << fixed << setprecision(2) << s.average_;
        out << setw(4) << s.rank_;
        return out;
}
Student::Student()
{
}
Student::Student(std::istream in)
{


}

bool Student::operator<(const Student& rhs) const
{
    return this->rank_ < rhs.rank_;
}
bool Student::operator>(const Student& rhs) const
{
    return this->rank_ > rhs.rank_;
}
istream& Student::read(std::istream& in)
{
    in >> name_ >> kor_ >> eng_ >> mat_;

    return in;
}

void Student::sum()
{
    sum_ = kor_ + eng_ + mat_;

}

void Student::average()
{
    average_ = static_cast<double>(sum_)/3.0;
}

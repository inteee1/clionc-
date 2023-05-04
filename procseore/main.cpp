#include <fstream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include "student.h"
using namespace std;



int main() {

//    FILE *fin, *fout;
//    fin = fopen("score.dat", "r");
//    fout = fopen("score.out", "w");
//    if (fin == NULL || fout == NULL) {
//    }

    ifstream in("score.dat");
    ofstream out("score.out");
    if(!in || !out ) {
        cerr << "cannot open file" << endl;
        exit(1);
    }
    vector<Student> students;
    Student s;
    while(s.read(in)) {
        students.push_back(s);
    }
   ::rank(students);
//    for (vector<Student>::iterator it = students.begin(); it != students.end(); ++it) {
//        for (vector<Student>::iterator it2 = students.begin(); it2 != students.end(); ++it2) {
//            if (it->sum < it2->sum) {
//                ++it->rank;
//            }
//        }
//    }

    sort(students.begin(), students.end());

    ::print(out, students);


//

    return 0;
}

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> Titles;
//    vector<string>::size_type maxlen;
    vector<string>::size_type maxlen = 0;
    string line;

    while(getline(cin, line)) {
        Titles.push_back(line);
//        if(maxlen < line.size()) {
//            maxlen = line.size();
//        }
        maxlen = max(maxlen, line.size());

    }

    vector<string> frameTitles;
    frameTitles.push_back(string(maxlen + 4, '*'));
//    for (vector<string>::size_type i = 0; i < Titles.size(); ++i) {
//        string space(maxlen - Titles[i].size(), ' ');
//        frameTitles.push_back("* " + Titles[i] + space + " *");
//    }

    for (vector<string>::const_iterator it = Titles.cbegin(); it != Titles.cend(); ++it) {
        string space(maxlen - it->size(), ' ');
        frameTitles.push_back("* " + *it + space + " *");

    }
    frameTitles.push_back(string(maxlen + 4, '*'));

//    for (vector<string>::size_type i = 0; i < frameTitles.size(); ++i) {
//        cout << frameTitles[i] << endl;
//    }
    for (vector<string>::const_iterator it = frameTitles.cbegin(); it != frameTitles.cend(); ++it) {
        cout << *it << endl;
    }


    return 0;
}

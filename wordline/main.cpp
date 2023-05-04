#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isspace(char c)
{

    return c == ' '  || c == '\t' || c == '\n';
}
bool space(char c)
{
    return isspace(c);
}
bool NotSpace(char c)
{
    return !isspace(c);
}
void split(string s, vector<string>& words)
{
    //string::size_type i = 0;
    string::const_iterator it = s.begin();
    while (it != s.end()) {
        it = std::find_if(it, s.cend(), NotSpace);

        string::const_iterator it2;
        it2 = std::find_if(it, s.cend(), space);

        if(it != s.cend()){
            words.push_back(string(it,it2));
        }
        it = it2;
//        while(i != s.size() && isspace(s[i])) {
//            ++i;
//        }
//        string::size_type j = i;
//
//        while (j != s.size() && !isspace(s[j])) {
//            ++j;
//        }
//        if(i != j) {
//            words.push_back(s.substr(i, j-1));
//            i = j;
//        }
    }



}

int main()
{
    map<string, vector<int> > wordLines;
    int lineNumber = 1;
    string s;
    while (getline(cin, s)) {
        vector<string> v;
        split(s, v);
        for(auto it = v.cbegin(); it != v.cend(); ++it) {
            wordLines[*it].push_back(lineNumber);

        }
        ++lineNumber;
    }
    if(std::equal(str.cbegin(), str.cend(), str.crbegin()) == true) {

    }

    for (auto it = wordLines.cbegin(); it != wordLines.cend(); ++it) {
        cout << it->first << " : ";
        for (auto it2 = it->second.cbegin(); it2 != it->second.cend(); ++it2) {
            cout << *it2 << ", ";
        }
        cout << endl;
    }

    return 0;
}
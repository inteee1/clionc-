#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
int main() {

    vector<string> words;
    vector<int> counts;

    string word;
    while(cin ) { //istream--> bool
        cin >> word;
        vector<string>::size_type i;
        for ( i = 0; i < words.size(); ++i) {
            if(word == words[i]){
                break;
            }
        }
        if (i == words.size()) {
            words.push_back(word);
            counts.push_back(1);
        } else {
            ++counts[i];
        }
    }

    for (vector<string>::size_type i = 0; i < words.size(); ++i) {
        cout << words[i] << " : " << counts[i] << endl;
    }
        //word in vector words?
        // ++counts;
        // else
        // word.push_back(word) && counts[i] = 1;
    return 0;
}

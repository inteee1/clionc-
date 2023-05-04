#include <iostream>
#include <vector>
#include <cstdlib>
#include "median.h"
using std::cin;
using std::cout;
using std::vector;
using std::endl;

int main() {

    vector<int> nums;
    srand(time(NULL));
    for(int i = 0; i < 10; ++i) {
        int value = rand() % 100 + 1;
        nums.push_back(value);
    }

//    for(int i = 0; i < nums.size(); ++i) {
//        cout << nums[i] << ". ";
//    }
//    cout << endl;

    const int result = ::median(nums);
    cout << "median : " << result << endl;

    return 0;
}

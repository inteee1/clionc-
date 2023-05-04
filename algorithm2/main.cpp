#include <iostream>
#include <vector>
#include <algorithm>
int square(int i)
{
    return i * i;
}
int main() {
    int nums[] = {50, 30, 100, 90, 60, 40, 10, 20, 70, 80};
    std::vector<int> v(nums, nums+10);
    std::vector<int> result;
    std::transform(v.cbegin(), v.cend(), std::back_inserter(result), square);

//    int pattern[] = {90 , 60, 40};
    //std::vector<int>::const_iterator it = search(v.cbegin(), v.cend(), pattern, pattern + 3);
//    if(it != v.cend()) {
//
//    } else {
//
//    }
    return 0;
}

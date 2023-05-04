#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <numeric>
bool fail(int score)
{
    return score < 60;
}
bool isPass(int score)
{

    return !fail(score);
}
bool isEqualZero(int value)
{
    return value == 0;

}
int main() {
    int nums[] = { 50, 30, 100, 20, 10, 90, 80, 60, 40, 70};
    std::vector<int> v1(nums, nums + 10);
    int sum = std::accumulate(v1.cbegin(), v1.cend(), 0);
    double nums2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double sum2 = std::accumulate(nums2, nums2 + 5, 0.0);
    std::vector<int> v2 = v1;
    v2.erase(std::remove(v2.begin(), v2.end(), 100));
    std::vector<int> v3 = v1;
    v3.erase(std::remove_if(v3.begin(), v3.end(), fail));
    std::vector<int> v4;
    std::copy(v1.begin(), v1.end(), std::back_inserter(v4));
    std::vector<int> v5;
    std::copy_if(v1.begin(), v1.end(), std::back_inserter(v5), isPass);

    std::vector<int>::const_iterator it = std::find(v1.begin(), v1.end(), 100);
    if( it != v1.end()) {
        std::cout << "found" << std::endl;
    } else {
        std::cout << "not found" << std::endl;
    }

    auto it2 = std::find_if(v1.begin(), v1.end(), isEqualZero);
    if( it != v1.end()) {
        std::cout << "found" << std::endl;
    } else {
        std::cout << "not found" << std::endl;
    }
    std::list<int> list(v1.cbegin(), v1.cend());
    if(std::equal(v1.cbegin(), v1.cend(), list.cbegin()) == true) {
        std::cout << "v1 and list are equal element" << std::endl;
    } else {
        std::cout << "v1 and list are not equal element" << std::endl;
    }

    std::string str = "civic";
    for(auto it = v1.crbegin(); it != v1.crend(); ++it)
    {
        std::cout << *it << std::endl;
    }
    std::vector<int> v6(v1.crbegin(), v1.crend());
    //std::replace(v6.begin(), v6.end() 50, 0);
    std::replace_if(v6.begin(), v6.end(), fail, 0);

    std::vector<int> v7;
    std::remove_copy_if(v1.cbegin(), v1.cend(), std::back_inserter(v7), fail);

    return 0;
}

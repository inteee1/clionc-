
#include <iostream>
#include <vector>
#include <string>
#include <random>
using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 99);

    vector<int> v1;
    //srand(time(NULL));
    
     for(int i = 1; i <= 100; ++i) {
    //    v[i] = rand()%100;
    //    int value = rand()%100+1;
    //    v.push_back(value);
        int num = dis(gen);
        v1.push_back(num);
    }
    int sum = 0;

    for (vector<int>::const_iterator/*auto*/ it = v1.cbegin(); it != v1.cend(); ++it) {
        sum += *it;
    }
    double average = sum/100;
    cout << "sum : " << sum<< "\t" << "average : " << average << endl;

    return 0;
}
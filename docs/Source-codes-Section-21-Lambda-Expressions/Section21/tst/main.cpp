#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
template <typename t> struct diplayer {

    void operator()(const t& data) { cout << data << endl; }
};



int main()
{
    diplayer <int> d1;
    d1(100);

    vector<int> vec1{ 1, 2, 3, 4, 5, 6 };

    for_each(vec1.begin(), vec1.end(), d1);
    cout << "h";
    return 0;
}

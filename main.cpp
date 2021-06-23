#include <iostream>
#include "Example.cpp"

using namespace std;

int main() {
    Example sample(3);
    cout << sample.getNumber(2) << std::endl;
    return 0;
}


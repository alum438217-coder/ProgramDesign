#include <iostream>
#include <cstdlib>
using namespace std;

struct Math {
    int abs(int value) {
        return std::abs(value);
    }
};

int main(void){
    Math math;
    cout << "Hello, world." << endl;
    cout << math.abs(-5) << endl;
    return 0;
}

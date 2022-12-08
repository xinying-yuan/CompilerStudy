#include "iostream"
// #include "yuanxinying.h"
using namespace std;

int main() {
#ifdef YXY_BUILD
    cout << "hello yuanxinying" << endl;
#else
    cout << "hello xiatian" << endl;
#endif
    int* addr = (int*)malloc(sizeof(int));
    *addr = 10;
    delete addr;
    return 0;
}
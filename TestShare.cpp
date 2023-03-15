#include <iostream>
#include "UtilsLib.h"
using namespace std;

int main() {
    Utils* ping = new Utils();
    ping -> getFoods(50);
    ping -> getFoods(1000);
    return 0;
}
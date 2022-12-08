#include <iostream>
#include "PingPingLib.h"
using namespace std;
const int limit = 100;

FoodType PingPing::getFoods(int money) {
    if (money < limit) {
        cout << "pingping get expensive food" << endl;
        return CHEAP_FOOD;
    } else {
        cout << "pingping get cheap food" << endl;
        return EXPENSIVE_FOOD;
    }
}
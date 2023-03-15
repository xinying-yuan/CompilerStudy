#include <iostream>
#include "UtilsLib.h"
using namespace std;
const int limit = 100;

FoodType Utils::getFoods(int money) {
    if (money < limit) {
        cout << "get expensive food" << endl;
        return CHEAP_FOOD;
    } else {
        cout << "get cheap food" << endl;
        return EXPENSIVE_FOOD;
    }
}

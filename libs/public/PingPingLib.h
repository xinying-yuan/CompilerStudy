#ifndef PINGPING_LIB_H
#define PINGPING_LIB_H
typedef enum _FoodType {
    EXPENSIVE_FOOD,
    CHEAP_FOOD,
} FoodType;

class PingPing {
    public:
        FoodType getFoods(int money);
};
#endif
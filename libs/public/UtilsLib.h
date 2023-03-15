#ifndef Utils_LIB_H
#define Utils_LIB_H
typedef enum _FoodType {
    EXPENSIVE_FOOD,
    CHEAP_FOOD,
} FoodType;

class Utils {
    public:
        FoodType getFoods(int money);
};
#endif
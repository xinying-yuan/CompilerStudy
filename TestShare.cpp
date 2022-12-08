#include <iostream>
#include "PingPingLib.h"
using namespace std;

int main() {
    PingPing* ping = new PingPing();
    ping -> getFoods(50);
    ping -> getFoods(1000);
    return 0;
}
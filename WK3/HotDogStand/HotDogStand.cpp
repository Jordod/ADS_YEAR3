#include "HotDogStand.h"

int HotDogStand::totalSold = 0;

HotDogStand::HotDogStand(int id, int numSoldToday) {
    HotDogStand::id = id;
    HotDogStand::numSoldToday = numSoldToday;
}

int HotDogStand::getAmtSold() {
    return totalSold;
}

int HotDogStand::getNumSoldToday() {
    return HotDogStand::numSoldToday;
}

void HotDogStand::justSold() {
    numSoldToday++;
    totalSold++;
}

int HotDogStand::getId() {
    return id;
}
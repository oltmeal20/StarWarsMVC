#include <iostream>
#include "Controller/controller.h"

int main() {
  Controller controller;
  controller.updateView(
    controller.modelSithPower(), 
    controller.modelJediPower());
  return 0;
}
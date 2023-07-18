#pragma once

#include <Arduino.h>

void setBuiltInDiode(int state) {
  pinMode(15, OUTPUT);
  digitalWrite(15, state);
}
#include <wrapper_vl53l8cx.h>

JARVIS_VL53L8CX sensor(&Wire, D2);

void setup() {
  Wire.begin();
  sensor.begin();
  sensor.isDataReady();
}

void loop() {

}
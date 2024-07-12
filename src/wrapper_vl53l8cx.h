#ifndef WRAPPER_VL53L8CX
#define WRAPPER_VL53L8CX

#include <Arduino.h>
#include <Wire.h>
#include <vl53l8cx.h>

class JARVIS_VL53L8CX : public VL53L8CX {
  using VL53L8CX::VL53L8CX;
  public:
    uint8_t isDataReady() {
      uint8_t NewDataReady = 0;
      uint8_t status;
      status = this->check_data_ready(&NewDataReady);
      if (status == 0)
        return NewDataReady != 0;
      return false;
    }

    uint8_t getResolution() {
      uint8_t res;
      this->get_resolution(&res);
      return res;
    }
};
#endif
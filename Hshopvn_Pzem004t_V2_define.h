#ifndef HSHOP_VN_H_PZEM004T_V2_DEFINE_H_
#define HSHOP_VN_H_PZEM004T_V2_DEFINE_H_

#include "arduino.h"

#define SCALE_V               (0.1)
#define SCALE_A               (0.001)
#define SCALE_P               (0.1)
#define SCALE_E               (1)
#define SCALE_H               (0.1)
#define SCALE_PF              (0.01)

#define MAX_PZEM_TIMEOUT      (20000) //ms
#define MIN_PZEM_TIMEOUT      (100) //ms

#define HSHOP_PZEM_CONVERT(low,high,scale)      (float)(((high<<8) + low) * scale)
#define HSHOPVN_PZEM_GET_VALUE(unit, scale)     HSHOP_PZEM_CONVERT(myBuf[_##unit##_L__], myBuf[_##unit##_H__],scale)

enum{
  _address__ = 0,
  _byteSuccess__,
  _numberOfByte__,
  _voltage_H__,
  _voltage_L__,
  _ampe_H__,
  _ampe_L__,
  _nouse1H__,
  _nouse1L__,
  _power_H__,
  _power_L__,
  _nouse2H__,
  _nouse2L__,
  _energy_H__,
  _energy_L__,
  _nouse3H__,
  _nouse3L__,
  _freq_H__,
  _freq_L__,
  _powerFactor_H__,
  _powerFactor_L__,
  _nouse4H__,
  _nouse5L__,
  _crc_H__,
  _crc_L__,
  RESPONSE_SIZE
};

typedef struct pzem_info{
  float volt;
  float ampe;
  float power;
  float energy;
  float freq;
  float powerFactor;
};

#endif

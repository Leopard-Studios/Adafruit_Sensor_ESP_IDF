#include <stdio.h>
#include "Adafruit_Sensor.h"

/**************************************************************************/
/*!
    @brief  Prints sensor information to serial console
*/
/**************************************************************************/
void Adafruit_Sensor::printSensorDetails(void) {
  sensor_t sensor;
  getSensor(&sensor);
  printf("------------------------------------\n");
  printf("Sensor:       ");
  printf("%*s\n",12,sensor.name);
  
  printf(("Type:         "));
  switch ((sensors_type_t)sensor.type) {
  case SENSOR_TYPE_ACCELEROMETER:
    printf("Acceleration (m/s2)");
    break;
  case SENSOR_TYPE_MAGNETIC_FIELD:
    printf("Magnetic (uT)");
    break;
  case SENSOR_TYPE_ORIENTATION:
    printf("Orientation (degrees)");
    break;
  case SENSOR_TYPE_GYROSCOPE:
    printf("Gyroscopic (rad/s)");
    break;
  case SENSOR_TYPE_LIGHT:
    printf("Light (lux)");
    break;
  case SENSOR_TYPE_PRESSURE:
    printf("Pressure (hPa)");
    break;
  case SENSOR_TYPE_PROXIMITY:
    printf("Distance (cm)");
    break;
  case SENSOR_TYPE_GRAVITY:
    printf("Gravity (m/s2)");
    break;
  case SENSOR_TYPE_LINEAR_ACCELERATION:
    printf("Linear Acceleration (m/s2)");
    break;
  case SENSOR_TYPE_ROTATION_VECTOR:
    printf("Rotation vector");
    break;
  case SENSOR_TYPE_RELATIVE_HUMIDITY:
    printf("Relative Humidity (%%)");
    break;
  case SENSOR_TYPE_AMBIENT_TEMPERATURE:
    printf("Ambient Temp (C)");
    break;
  case SENSOR_TYPE_OBJECT_TEMPERATURE:
    printf("Object Temp (C)");
    break;
  case SENSOR_TYPE_VOLTAGE:
    printf("Voltage (V)");
    break;
  case SENSOR_TYPE_CURRENT:
    printf("Current (mA)");
    break;
  case SENSOR_TYPE_COLOR:
    printf("Color (RGBA)");
    break;
  case SENSOR_TYPE_TVOC:
    printf("Total Volatile Organic Compounds (ppb)");
    break;
  case SENSOR_TYPE_VOC_INDEX:
    printf("Volatile Organic Compounds (Index)");
    break;
  case SENSOR_TYPE_NOX_INDEX:
    printf("Nitrogen Oxides (Index)");
    break;
  case SENSOR_TYPE_CO2:
    printf("Carbon Dioxide (ppm)");
    break;
  case SENSOR_TYPE_ECO2:
    printf("Equivalent/estimated CO2 (ppm)");
    break;
  case SENSOR_TYPE_PM10_STD:
    printf("Standard Particulate Matter 1.0 (ppm)");
    break;
  case SENSOR_TYPE_PM25_STD:
    printf("Standard Particulate Matter 2.5 (ppm)");
    break;
  case SENSOR_TYPE_PM100_STD:
    printf("Standard Particulate Matter 10.0 (ppm)");
    break;
  case SENSOR_TYPE_PM10_ENV:
    printf("Environmental Particulate Matter 1.0 (ppm)");
    break;
  case SENSOR_TYPE_PM25_ENV:
    printf("Environmental Particulate Matter 2.5 (ppm)");
    break;
  case SENSOR_TYPE_PM100_ENV:
    printf("Environmental Particulate Matter 10.0 (ppm)");
    break;
  case SENSOR_TYPE_GAS_RESISTANCE:
    printf("Gas Resistance (ohms)");
    break;
  case SENSOR_TYPE_UNITLESS_PERCENT:
    printf("Unitless Percent (%%)");
    break;
  case SENSOR_TYPE_ALTITUDE:
    printf("Altitude (m)");
    break;
  }

  printf("\n");
  printf("Driver Ver:   %ld\n", sensor.version);
  printf("Unique ID:    %ld\n", sensor.sensor_id);
  printf("Min Value:    %f\n", sensor.min_value);
  printf("Max Value:    %f\n", sensor.max_value);
  printf("Resolution:   %f\n", sensor.resolution);
  printf("------------------------------------\n\n");
}

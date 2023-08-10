#include <stdio.h>
#include <assert.h>
#include <string.h>

struct SensorData {
    double temperatureInC;
    int precipitation;
    int humidity;
    int windSpeedKMPH;
};

struct SensorData sensorStub() {
    struct SensorData readings = {72, 70, 26, 52};
    return readings;
}

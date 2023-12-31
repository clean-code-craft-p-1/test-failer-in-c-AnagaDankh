#include "weatherreport.h"

const char* report(struct SensorData (*sensorReader)()) {
    struct SensorData readings = sensorReader();
    const char* weather = "Sunny Day";

    if (readings.temperatureInC > 25)
    {
        if (readings.precipitation >= 20 && readings.precipitation < 60)
            weather = "Partly Cloudy";
        else if (readings.windSpeedKMPH > 50)
            weather = "Alert, Stormy with heavy rain";
    }
    return weather;
}

void testRainy()
{
    const char* weather = report(&sensorStub);
    printf("%s\n", weather);
    assert(strstr(weather, "rain") != NULL);
}

void testHighPrecipitation()
{
    // This instance of stub needs to be different-
    // to give high precipitation (>60) and low wind-speed (<50)

    const char* weather = report(&sensorStub);

    // strengthen the assert to expose the bug
    // (function returns Sunny day, it should predict rain)
    assert(strlen(weather) > 0);
    assert(strstr(weather, "Alert, Stormy with heavy rain") != NULL);
}

int main() {
    testRainy();
    testHighPrecipitation();
    printf("All is well (maybe)\n");
    return 0;
}

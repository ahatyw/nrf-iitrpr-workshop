#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/sensor.h>
#include <stdio.h>

int main(void)
{
    /* Get the AHT20 device from the devicetree */
    const struct device *const aht20_dev = DEVICE_DT_GET_ANY(aosong_aht20);

    printf("Starting AHT20 Sensor Application...\n");

    /* Check if the AHT20 is ready on the I2C bus */
    if (aht20_dev == NULL || !device_is_ready(aht20_dev)) {
        printf("Error: AHT20 device is not ready. Check your app.overlay and wiring!\n");
        return 0;
    }

    printf("AHT20 Sensor ready. Beginning measurements...\n");

    /* Main Loop */
    while (1) {
        struct sensor_value temp, hum;

        /* Fetch the data from the sensor over I2C */
        if (sensor_sample_fetch(aht20_dev) == 0) {
            sensor_channel_get(aht20_dev, SENSOR_CHAN_AMBIENT_TEMP, &temp);
            sensor_channel_get(aht20_dev, SENSOR_CHAN_HUMIDITY, &hum);

            /* Convert Zephyr's internal struct to standard doubles for printing */
            double temp_val = sensor_value_to_double(&temp);
            double hum_val = sensor_value_to_double(&hum);

            /* Output string */
            printf("AHT20 Sensor: Temperature = %.2f C, Humidity = %.2f %%\n", temp_val, hum_val);
        } else {
            printf("Error: Failed to fetch data from AHT20.\n");
        }

        /* Sleep for 1000ms (1 second) before the next reading */
        k_sleep(K_MSEC(1000));
    }

    return 0;
}
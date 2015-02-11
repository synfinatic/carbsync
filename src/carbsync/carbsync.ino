/* 
 * Copyright 2015 (c) Aaron Turner
 * This code is released under the GPLv3 license.  Please see the LICENSE file 
 * for details.
 *
 * More information is available here: https://github.com/synfinatic/carbsync
 */

#include <Arduino.h>
#include <Flash.h>
#include <MsTimer2.h>

#include "carbsync.h"
#include "PCD8544.h"


static PCD8544 lcd;
const int sensors[] = { SENSOR_PIN1, SENSOR_PIN2, SENSOR_PIN3, SENSOR_PIN4 };

void
setup() {
    int i;
    Serial.begin(SERIAL_SPEED);
    lcd.begin_custpins(84, 48, SCLK, SDIN, DC, RESET, SCE);

    for (i = 0; i < MAX_SENSORS ; i++) {
        pinMode(sensors[i], INPUT);
    }

    // init display
    // calibrate sensors
}

void
loop() {
    static int sensor = -1;

    sensor < MAX_SENSORS ? sensor ++ : 0;

    // 1. adc_read sensors[sensor]
    // 2. update display()
}

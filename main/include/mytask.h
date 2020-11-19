#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "esp_err.h"
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <ctype.h>
#include "include/color_sensor.h"
#include "include/servo_motor.h"
#include "include/stepper_motor.h"

#define IMAGE_WIDTH   8
#define IMAGE_HEIGHT  8



void tcs34725_task(void *ignore);
void drv8825_task(void *ignore);
void sg90_task(void *ignore);
void test_task();

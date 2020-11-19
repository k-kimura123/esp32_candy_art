#include "include/myserver_config.h"
#include "include/wifi_config.h"
#include "sdkconfig.h"





/************************************
 * Testing complete functionality
 ************************************/
void app_main() {
	// xTaskCreate(&tcs34725_task, "tcs34725_task", 2048, NULL, 5, NULL);
	
	//xTaskCreate(&sg90_task, "sg90_task", 2048, NULL, 5, NULL);
	spiffs_setup();
	
	wifiInit();

	serverconfig();
	
	
	
}
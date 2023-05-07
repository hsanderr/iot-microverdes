/**
 * @file http.c
 * @author Henrique Sander Lourenço
 * @brief
 * @version 0.1
 * @date 2023-04-19
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <string.h>
#include <stdlib.h>
#include <inttypes.h>
#include <time.h>
#include <sys/time.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "esp_system.h"
#include "esp_timer.h"
#include "nvs_flash.h"
#include "nvs.h"
#include "esp_sntp.h"
#include "esp_netif.h"
#include "esp_tls.h"
#include "sdkconfig.h"
#include "esp_crt_bundle.h"

#include "lwip/err.h"
#include "lwip/sockets.h"
#include "lwip/sys.h"
#include "lwip/netdb.h"
#include "lwip/dns.h"

/* Constants that aren't configurable in menuconfig */
#define WEB_SERVER "www.howsmyssl.com"
#define WEB_PORT "443"
#define WEB_URL "https://www.howsmyssl.com/a/check"

void Http__Initialize(void)
{
    ESP_ERROR_CHECK(esp_netif_init());
}
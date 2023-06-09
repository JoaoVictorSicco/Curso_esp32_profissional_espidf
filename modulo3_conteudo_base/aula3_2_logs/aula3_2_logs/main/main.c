#include <stdio.h>
#include "esp_log.h"

void app_main(void)
{

    int var = 0;
    ESP_LOGE("LOG1","LOG DE ERRO %d",var++);
    ESP_LOGW("LOG1","LOG DE WARNING/AVISO %d",var++);
    ESP_LOGI("LOG1","LOG DE INFORMAÇÃO %d",var++);
    ESP_LOGD("LOG1","LOG DE DEBUG %d",var++);
    ESP_LOGV("LOG1","LOG DE TEXTO COMUM/VERBOSE %d",var++);


    esp_log_level_set("LOG2",ESP_LOG_WARN);
    ESP_LOGW("LOG2","LOG DE WARNING/AVISO");
    ESP_LOGI("LOG2","LOG DE INFORMAÇÃO");
    ESP_LOGD("LOG2","LOG DE DEBUG");
    ESP_LOGV("LOG2","LOG DE TEXTO COMUM/VERBOSE");

}

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void task1(void *params)
{
    while(1)
    {
        printf("Leitura de temperatura %s \n", (char *) params);
        vTaskDelay(1000/portTICK_PERIOD_MS);
    }
}

void task2(void *params)
{
    while(1)
    {
        printf("Leitura de umidade %s \n", (char *) params);
        vTaskDelay(2000/portTICK_PERIOD_MS);
    }
}

void app_main(void)
{
    // Criação de uma task
    xTaskCreate(&task1,"Leitura de temperatura",2048,"task1",5,NULL);
    // Para selecionar o core adiciona a função pinned to core -> depois seleciona o core 1 colocando '0' no último parâmetro
    // Para selecionar o segundo core -> coloca '1'
    xTaskCreatePinnedToCore(&task2,"Leitura de umidade",2048,"task2",2,NULL,0);

}
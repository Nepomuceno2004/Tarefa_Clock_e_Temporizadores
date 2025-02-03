#include <stdio.h>
#include "pico/stdlib.h"

#define ledVermelho 11
#define ledAmarelo 12
#define ledVerde 13
int ledAceso = 1;

bool repeating_timer_callback(struct repeating_timer *t)
{
    if(ledAceso == 1){
        gpio_put(ledVerde, false);
        gpio_put(ledVermelho, true);
    }
    else if (ledAceso == 2)
    {
        gpio_put(ledVermelho, false);
        gpio_put(ledAmarelo, true);
    }
    else if (ledAceso == 3)
    {
        gpio_put(ledAmarelo, false);
        gpio_put(ledVerde, true);
        ledAceso = 0;
    }

    ledAceso++;
    printf("Altera o sinal");

    return true;
}

int main()
{
    stdio_init_all();

    gpio_init(ledVermelho);
    gpio_init(ledAmarelo);
    gpio_init(ledVerde);

    gpio_set_dir(ledVermelho, true);
    gpio_set_dir(ledAmarelo, true);
    gpio_set_dir(ledVerde, true);

    // Esta estrutura armazenará informações sobre o temporizador configurado.
    struct repeating_timer timer;

    // Configura o temporizador para chamar a função de callback a cada 1 segundo.
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    while (true)
    {
        sleep_ms(1000);
        printf("Passou 1 segundo");
    }
}

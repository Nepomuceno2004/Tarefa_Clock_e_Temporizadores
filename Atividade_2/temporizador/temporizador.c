#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/time.h"

#define ledAzul 11
#define ledVermelho 12
#define ledVerde 13
#define buttonA 5

static volatile uint32_t last_time = 0;

int64_t turn_off_callback(alarm_id_t id, void *user_data);
void gpio_irq_handler(uint gpio, uint32_t events);

int main()
{
    stdio_init_all();

    gpio_init(ledAzul);
    gpio_init(ledVerde);
    gpio_init(ledVermelho);
    gpio_init(buttonA);

    gpio_set_dir(ledAzul, true);
    gpio_set_dir(ledVermelho, true);
    gpio_set_dir(ledVerde, true);
    gpio_set_dir(buttonA, false);

    gpio_pull_up(buttonA);

    gpio_set_irq_enabled_with_callback(buttonA, GPIO_IRQ_EDGE_FALL, true, &gpio_irq_handler);

    while (true)
    {
    }
}

int64_t turn_off_callback(alarm_id_t id, void *user_data)
{

    // Desligar os LEDs um por vez com atraso de 3s
    gpio_put(ledAzul, 0);
    sleep_ms(3000);

    gpio_put(ledVermelho, 0);
    sleep_ms(3000);

    gpio_put(ledVerde, 0);

    // Atualiza o estado da interrupção para que assim ela volte a funcionar
    gpio_set_irq_enabled(buttonA, GPIO_IRQ_EDGE_FALL, true);

    // Retorna 0 para indicar que o alarme não deve se repetir.
    return 0;
}

void gpio_irq_handler(uint gpio, uint32_t events)
{
    uint32_t current_time = to_us_since_boot(get_absolute_time());

    if (current_time - last_time > 200000) // 200ms de debounce
    {
        last_time = current_time;

        gpio_put(ledVermelho, 1);
        gpio_put(ledAzul, 1);
        gpio_put(ledVerde, 1);

        // Atualiza o estado da interrupção para que ela não funcione
        gpio_set_irq_enabled(gpio, GPIO_IRQ_EDGE_FALL, false);

        add_alarm_in_ms(3000, turn_off_callback, NULL, false);
    }
}
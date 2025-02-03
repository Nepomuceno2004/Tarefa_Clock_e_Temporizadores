#include <stdio.h>
#include "pico/stdlib.h"

#define ledVermelho 11
#define ledAmarelo 12
#define ledVerde 13
#define tempo 300

int main()
{
    stdio_init_all();

    gpio_init(ledVermelho);
    gpio_init(ledAmarelo);
    gpio_init(ledVerde);

    gpio_set_dir(ledVermelho, true);
    gpio_set_dir(ledAmarelo, true);
    gpio_set_dir(ledVerde, true);


    while (true) {
    }
}
